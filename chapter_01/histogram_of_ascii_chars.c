#include <stdio.h>

/*
  Exercise 1-14. Write a program to print a histogram of the frequencies of different
  characters in its input.
*/

#define ASCII_LIMIT 128 /* Total ASCII characters */

int main(int argc, char const *argv[])
{
  int c, i, nother = 0;
  int ascii_count[ASCII_LIMIT];
  

  /* Initialize the counts to zero */
  for (i = 0; i < ASCII_LIMIT; ++i)
    ascii_count[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= 0 && c < ASCII_LIMIT)
    {
      ++ascii_count[c]; /* increment count for a corresponding ASCII char*/
    }
    else
    {
      ++nother;
    }

  printf("Character count:\n");
  for (i = 0; i < ASCII_LIMIT; ++i)
    if (ascii_count[i] > 0)
    {
      printf("'%c' : %d\n", (char)i, ascii_count[i]);
    }

  printf("Non-ASCII characters: %d\n", nother);

  return 0;
}
