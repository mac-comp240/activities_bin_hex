# Activity 4: Binary and Hex Representations

## Put Names Here
Folder: `activities_bin_hex`

This is an introduction to:
* Displaying the binary and hexadecimal values of unsigned integers in C
* Converting integers to binary

You will modify a program to print unsigned char integers in hex and
in binary, using a helpful library of conversion functions.

**Hint:** At the bottom of this README is a section called References that 
contains references to resources that can help you with these questions

## Provided Code

There are two code files, one header file, and a Makefile for this activity:

- `activity4.c`
    - the main source file with three tasks defined in it
- `binary_convert.c`
    - a library file containing functions to convert integers to binary strings
- `binary_convert.h`
    - a header file for the library
- `Makefile`
    - a short makefile to automate the compilation process

You will only need to edit `activity4.c`. The code in `binary_convert.c` includes
a few operations you haven't seen yet, but you should read through it to make sense
of as much as you can.


## Your tasks

### First Steps
- As always, add your name(s) in a comment at the top of each file you edit!
- Add your name(s) to the top of this README file, as well!
- Read through all the files, including the header and Makefile to be sure you
understand the context of what you are doing. 


### Task 1: Printing unsigned char as hex and binary

In the `activity4.c` file you will see a function called `print_all_pos_bytes`. 
This function loops over all the unsigned char integers from 0 to 255, written in
hex as 0x00 to 0xFF. It includes a print statement that, for now, only prints the
value in decimal.

- Run the code before modifying it to see what it does
- Modify the print statement so that the decimal number is printed in a column three
digits wide (Run the code to test that this works)
- Add to the print statement after the "Hex:" part so that it prints `i` in hexadecimal
format (C can do this with the right `printf` code): experiment with how to print the hex letters in uppercase format, and how to print the Hex number in a column with a fixed width
- Next, find the correct conversion function in `binary_convert.c` and call it
to create a string representing the number `i` in binary. Note that all the conversion
functions return a new, dynamically-allocated string. You need to assign this to the
variable provided, `bin_str`. Add this string to the print statement after the "Binary:"
part.
- Finally, note that the `print_all_pos_bytes` function uses a "while true"
loop structure. This might seem like overkill, given that we want to iterate over
a fixed number of values. Make a copy of the function, and change 
it to use a simple `for` loop. What happens? And why?

### (Optional) Task 2: Revise the function to print other sized unsigned integers

**This task is optional, undertake it only if you have time!**

Modify `print_all_pos_bytes` so that it prints all the values of an `unsigned short` integer.
- Change `i` to be an `unsigned short` integer
- Change the conversion function
- Change the print statement so that it prints properly
- Change the conditional to stop the loop so that is uses the unsigned short maximum

You may repeat this process for `unsigned int` and `unsigned long` (you might want to
print only every 10,000 or 100,000 values for these larger types!).


### Feeling stuck or confused?

Ask for help right away from neighbors, preceptors, or instructor!


### Commenting as documentation

You should comment each function you write like you would for Java:

	/** Describe inputs and return values and 
	 * what the function does -- this comment
	 * must start with /**, just like 
	 * javadoc comments
	 */

## References

- Makefile guides
  - [An Introduction to Makefiles](https://www.gnu.org/software/make/manual/html_node/Introduction.html), by GNU
  - [Makefile Tutorials and Examples to Build From](https://earthly.dev/blog/make-tutorial/), by Aniket Bhattacharyea
  - [makefile basics - anthony explains](https://www.youtube.com/watch?v=20GC9mYoFGs)
- General C syntax help
  - [Chapter 1 of _Dive into Systems_](https://diveintosystems.org/book/C1-C_intro/index.html)
  - _The C Programming Language_, often just known as K&R for Kernighan and Ritchie
  - _C: A Reference Manual_, by Harbitson and Steele
