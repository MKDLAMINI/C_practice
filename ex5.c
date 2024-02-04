/* The Structure of a C program */

/* exporting header file that contain a list of functions to output code */
#include <stdio.h>

/* function takes two parameters, int for arg count and an array of char strings for arguments */

int main(int argc, char *argv[])
{
/* declare a variable by assigning a value that will be printed */
	int distance = 100;

/* call printf to print the string with the integer, the %d is a placeholder that the compiler translates to an integer */

	printf("You are %d miles away.\n", distance);

/* return from the main function which gives the system an exit value */

	return 0;
}
