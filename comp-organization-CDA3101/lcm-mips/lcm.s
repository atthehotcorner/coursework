# Programming Assignment 2
# Abraham Yuen

.data
str1: .asciiz "Enter integer a\n"
str2: .asciiz "Enter integer b\n"
str3: .asciiz "The least common multiple of a and b is "
nline: .asciiz "\n"

.text
main:
	sw $ra, 4($sp)		# save return address

	li $v0, 4		# print 'Enter integer a'
	la $a0, str1
	syscall

	li $v0, 5		# save input as number1
	syscall
	move $t0, $v0

	li $v0, 4		# print 'Enter integer b'
	la $a0, str2
	syscall

li $v0, 5		# syscall 5 (read int, scanf)
syscall			# get input
move $t1, $v0		# place the value read into register $t2 (b=input, n2)

add $a0, $t0, $zero	# place n1 and n2 into args
add $a1, $t1, $zero
jal lcm			# call lcm
move $t2, $v0		# save result ($t2)

li $v0, 4		# syscall 4 (printf)
la $a0, str3		# argument: string
syscall			# print the string (lcm of ...)

li $v0, 1		# syscall 1 (print int)
add $a0, $t7, $zero	# move int to $a0
syscall			# print int (result of lcm call)

li $v0, 4		# syscall 4 (printf)
la $a0, nline		# argument: string
syscall			# print the string (new line)

li $v0, 10		# syscall 10 (terminate program, exit)
syscall

# Procedures
lcm:			# args number1, number2	in $a0, $a1
	sub $sp, $sp, 8		# push stack
	sw $ra, 4($sp)		# save return address

	mult $a0, $a1		# number1 * number2
	mfhi $t3		# put hi in t3
	mflo $t4		# put lo in t4
	add $v0, $t3, $t4	# put return variable in $v0

	jal gcd			# call gcd in lcm
	div $t4, $t6		# number1 * number2 / gcd(number1 * number2)
	mflo $t7		# move div result to t7

	lw $ra, 4($sp)		# restore previous return addr
	add $sp, $sp, 8		# pop stack
	jr $ra			# return from procedure

gcd:			# GCD procedure with same a0, a1 args
	sub $sp, $sp, 8	# push stack
	sw $ra, 4($sp)		# save return address

	div $a0, $a1		# number1 % number 2
	mfhi $t5		# move mod result to $t5

	bnez $t5, ELSE	# if result not = 0 then skip
	# result is zero
	add $t6, $a1, $zero	# store number2 in $t6
	lw $ra, 4($sp)		# restore previous return addr
	add $sp, $sp, 8		# pop stack
	jr $ra			# return from procedure
ELSE:
	# result is not zero
	add $a0, $a1, $zero		# replace number1 with number2
	add $a1, $t5, $zero	# replace number2 with % result
	j gcd			# recursive gcd
