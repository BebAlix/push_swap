# push_swap

this program have two stack, he takes as an argument the stack a formatted as a list of integers. The first argument should be at the top of the
stack.
The program display the smallest list of instructions possible to sort the stack
a with using the stack b using and printing the rules.

##Rules
 - sa (swap a): Swap the first 2 elements at the top of stack a.

 - sb (swap b): Swap the first 2 elements at the top of stack b.

 - ss : sa and sb at the same time.
 
 - pa (push a): Take the first element at the top of b and put it at the top of a.

 - pb (push b): Take the first element at the top of a and put it at the top of b.

 - ra (rotate a): Shift up all elements of stack a by 1.

 - rb (rotate b): Shift up all elements of stack b by 1.

 - rr : ra and rb at the same time.

 - rra (reverse rotate a): Shift down all elements of stack a by 1.

 - rrb (reverse rotate b): Shift down all elements of stack b by 1.

 - rrr : rra and rrb at the same time.

## How to launch the programm

1. To compile the program :

   ```sh
   $ make
   ```
   
2. To start the program :

   ```sh
   $ ./push_swap [a list of integer]
   ```
3. Remove all :

	```sh
	$ make fclean
	
