#Takes integer user input and keeps a running total until the user inputs 0 and recieves the sum along with the number of integers inputted.
#Written by Jalay Shukla for CS2340.005, assignment 1, starting February 4, 2023. NetID: jks200003
# Start of code
.data
inputMessage: .asciiz "Enter an integer: "
sumMessage: .asciiz "\nSum "
numOfIntsMessage: .asciiz "\nThe number of intengers entered was "

.text
while: 
# while loop that will exit once 0 is inputted
	blt $t4, 0, exit 
	addi $t4, $t4, 1
	li $v0,4				#outputs message to enter int input
	la $a0,inputMessage
	syscall
	li $v0,5 				#takes int input
	syscall
	move $t1,$v0
	beq $t1, 0, numbersEqual 		#if user input($t1) == 0, then numbersEqual will execute
	add $t2,$t2, $t1 			#otherwise there will be a running total
	addi $t3, $t3, 1 			#counter for number of ints inputted
	j while
# displays the sum and number of integers entered and exits the while loop and program
numbersEqual:
	li $v0,4
	la $a0,sumMessage 				#displays the sum
	syscall
	li $v0,1
	move $a0,$t2 				#moves the sum to the $a0 register
	syscall
	li $v0,4
	la $a0,numOfIntsMessage 				#displays the number of integers added
	syscall
	li $v0,1
	move $a0,$t3 				#moves the number of integers added to the $a0 register
	syscall
	li $v0,10 				#exits program
	syscall
exit:
# unused but is required for the blt command in line 11
	li $v0,10
	syscall
