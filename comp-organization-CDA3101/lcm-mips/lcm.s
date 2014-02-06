# Programming Assignment 2
# Abraham Yuen
#
# t0 = number 1
# t1 = number 2
# v0 = return reg
# a0, a1 = argument regs

.data
str1: .asciiz "Enter integer a\n"
str2: .asciiz "Enter integer b\n"
str3: .asciiz "The least common multiple of a and b is "
newline: .asciiz "\n"

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

	li $v0, 5		# save input as number2
	syscall
	move $t1, $v0

	add $a0, $t0, $zero	# place number1 and number2 into args
	add $a1, $t1, $zero

	jal lcm			# call lcm with args
	move $t2, $v0		# save result in $t2

	li $v0, 4		# print "The least common multiple of a and b is "
	la $a0, str3
	syscall

	li $v0, 1		# print lcm result
	add $a0, $t2, $zero
	syscall

	li $v0, 4		# print new line char
	la $a0, newline
	syscall

	li $v0, 10		# syscall 10 (terminate program, exit)
	syscall

# Procedures
lcm: # args number1, number2 in $a0, $a1
	sub $sp, $sp, 8		# push stack
	sw $ra, 4($sp)		# save return address

	mult $a0, $a1		# number1 * number2
	mfhi $t3		# put hi in t3
	mflo $t4		# put lo in t4
	add $t4, $t3, $t4	# put return variable in $v0

	jal gcd			# call gcd in lcm
	add $t2, $v0, $zero	# save result in $t2

	div $t4, $t2		# number1 * number2 / gcd(number1 * number2)
	mflo $v0		# move div result to $v0

	lw $ra, 4($sp)		# restore previous return addr
	add $sp, $sp, 8		# pop stack
	jr $ra			# return from procedure

gcd: # args a0, a1 carried from lcm
	sub $sp, $sp, 8		# push stack
	sw $ra, 4($sp)		# save return address

	div $a0, $a1		# number1 % number 2
	mfhi $t5		# move mod result to $t5

	bnez $t5, else		# if result not = 0 then ELSE
	# result is zero
	add $v0, $a1, $zero	# store number2 in $v0
	lw $ra, 4($sp)		# restore previous return addr
	add $sp, $sp, 8		# pop stack
	jr $ra			# return from procedure

	else:
	# result is not zero
	add $a0, $a1, $zero	# replace number1 with number2
	add $a1, $t5, $zero	# replace number2 with % result
	j gcd			# recursive gcd
