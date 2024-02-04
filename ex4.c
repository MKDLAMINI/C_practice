/* using valgrind to detect errors and fixing them, the below code has been fixed when I first did this exercise */

#include <stdio.h>

int main()
{
	int age = 10;
	int height = 50;

	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height);

	return 0;
}
