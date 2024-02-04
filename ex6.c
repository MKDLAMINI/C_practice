/* Types of Variables */

#include <stdio.h>
/* main function that passes two parameters, int arg and char string of arrays */

int main(int argc, char *argv[])
{
/* declare a variable by assigning var type as well as the value */

	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'M';
	char first_name[] = "MK";
	char last_name[] = "Dlamini";
/* use format specifers to store and print out the values from each variable */
	
	printf("You are %d kilometers away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("I have an initial %c.\n", initial);
	printf("I have a first name %s.\n", first_name);
	printf("I have a last name %s.\n", last_name);
	printf("My whole name is %s %c. %s.\n",
			first_name, initial, last_name);

/* return exit status */

	return 0;
}
