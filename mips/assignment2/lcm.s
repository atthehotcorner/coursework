# Programming Assignment 2
# Abraham Yuen

.data
str1: .asciiz "Enter integer a\n"
str2: .asciiz "Enter integer b\n "
str3: .asciiz "The least common multiple of a and b is "

.text
main:
li $v0, 4		# syscall 4 (printf)
la $a0, str1		# argument: string
syscall			# print the string (a)

li $v0, 5		# syscall 5 (read int, scanf)
syscall			# get input
move $t1, $v0		# place the value read into register $t1 (a=input, n1)

li $v0, 4		# syscall 4 (printf)
la $a0, str2		# argument: string
syscall			# print the string (b)

li $v0, 5		# syscall 5 (read int, scanf)
syscall			# get input
move $t2, $v0		# place the value read into register $t2 (b=input, n2)

jal lmc			# call procedure


li $v0, 4		# syscall 4 (printf)
la $a0, str3		# argument: string
syscall			# print the string (lcm(n1, n2))

li $v0, 10		# syscall 10 (terminate program, exit)
syscall

gcd:			# GCD procedure
jr $ra			# return from procedure

lcm:			# LCM procedure
jr $ra			# return from procedure
