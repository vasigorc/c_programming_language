#include <stdio.h>

/* Exercise 1-4. Write a program to print the corresponding
Celsius to Fehrenheit table.*/

int main(int argc, char const *argv[])
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature table */
  upper = 300;
  step = 20;

  fahr = lower;
  printf("%10s %10s\n", "Celsius", "Fahrenheit");
  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32);
    printf("%10.1f %10.0f\n", celsius, fahr);
    fahr = fahr + step;
  }

  return 0;
}
