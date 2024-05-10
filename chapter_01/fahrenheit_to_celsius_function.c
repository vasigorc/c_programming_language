#include <stdio.h>

/*
  Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion
*/

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

// function prototype
double fahrenheit_to_celsius(int fahr);

/* print Fahrenheit-Celsius table*/
int main(int argc, char const *argv[])
{
  int fahr;

  printf("%10s %10s\n", "Fahrenheit", "Celsius");
  for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    printf("%6d %10.1f\n", fahr, fahrenheit_to_celsius(fahr));
  return 0;
}

double fahrenheit_to_celsius(int fahr)
{
  return (5.0 / 9.0) * (fahr - 32);
}
