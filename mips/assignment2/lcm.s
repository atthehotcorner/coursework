# Programming Assignment 2
# Abraham Yuen

.data
str1: .asciiz "Enter integer a\n"
str2: .asciiz "Enter integer b\n"
str3: .asciiz "The least common multiple of a and b is "
nline: .asciiz "\n"

.text
main:
li $v0, 4		# syscall 4 (printf)
la $a0, str1		# argument: string
syscall			# print the string (a)

li $v0, 5		# syscall 5 (read int, scanf)
syscall			# get input
move $t0, $v0		# place the value read into register $t1 (a=input, n1)

li $v0, 4		# syscall 4 (printf)
la $a0, str2		# argument: string
syscall			# print the string (b)

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
add $a0, $t2, $zero	# move int to $a0
syscall			# print int (result of lcm call)

li $v0, 4		# syscall 4 (printf)
la $a0, nline		# argument: string
syscall			# print the string (new line)

li $v0, 10		# syscall 10 (terminate program, exit)
syscall

# Procedures
lcm:			# args number1, number2		
mult $a0, $a1		# number1 * number2
mfhi $t3		# put hi in t3
mflo $t4		# put lo in t4
add $v0, $t3, $t4	# put return variable in $v0

jal gcd			# call gcd in lcm

jr $ra			# return from procedure


gcd:			# GCD procedure with same a0, a1 args
div $a0, $a1		# number1 % number 2
mfhi $t5		# move result result to $t5

bnez $t5, NOTZERO	# if result not = 0 then skip
# result is zero
add $t6, $a1, $zero	# return number2
jr $ra			# return from procedure
NOTZERO:
# result is not zero

j gcd			# go back to gcd
