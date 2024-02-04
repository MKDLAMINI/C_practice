/* formatted printing */

/* library for standard input/output, this allows us to use printf */
#include <stdio.h>

/* define the main function */
int main()
{
  /* we declare variables using int because we are assigning numerical values to it */
  int age = 10;
  int height = 72;

  /* we print out a string using %d(format specifers) to output the numbers */
  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  return 0;
}
