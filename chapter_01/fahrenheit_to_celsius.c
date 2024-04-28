#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0,20, ..., 300 */

int main(int argc, char const *argv[])
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature table */
  upper = 300;
  step = 20;

  fahr = lower;
  /* Exercise 1-3. Modify the program to print a heading above the table*/
  printf("%10s %10s\n", "Fahrenheit", "Celsius");
  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32);
    printf("%10.0f %10.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
