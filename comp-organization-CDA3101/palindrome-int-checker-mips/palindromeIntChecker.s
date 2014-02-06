# Programming Assignment 1
# Abraham Yuen

.data
str1: .asciiz "Enter a number to check if it is a palindrome or not\n"
str2: .asciiz " is a palindrome number.\n "
str3: .asciiz " is not a palindrome number.\n "

.text
main:
addi $t0, $zero, 0	# reverse=0

li $v0, 4		# syscall 4 (printf)
la $a0, str1		# argument: string
syscall			# print the string

li $v0, 5		# syscall 5 (read int, scanf)
syscall			# get input
move $t1, $v0		# place the value read into register $t1 (n=input)

add $t2, $t1, $zero	# temp=n

addi $s1, $zero, 10	# $s1 set to 10

STARTLOOP:
beqz $t2, ENDLOOP	# branch if temp=0
mult $t0, $s1		# reverse * 10
mflo $t0		# move result to $t0

div $t2, $s1		# temp%10
mfhi $t3		# move temp%10 result to $t3
add $t0, $t0, $t3	# reverse + temp%10

div $t2, $s1		# temp/10
mflo $t2		# move temp/10 result to $t2
j STARTLOOP

ENDLOOP:
add $s2, $t1, $zero	# copy n
li $v0, 1		# syscall 1 (print int n)
move $a0, $s2		# move int to $a0
syscall			# print int

beq $t1, $t0, EQUAL	# if n == reverse
li $v0, 4		# syscall 4 (printf)
la $a0, str3		# argument: string (not equal)
syscall			# print the string
j EXIT

EQUAL:			# else
li $v0, 4		# syscall 4 (printf)
la $a0, str2		# argument: string (equal)
syscall			# print the string

EXIT:
li $v0, 10		# syscall 10 (terminate program, exit)
syscall
