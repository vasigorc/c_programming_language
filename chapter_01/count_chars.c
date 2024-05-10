#include <stdio.h>

#define LIMIT 10 /* indexes for all digits */

/* count digits, white space, others */
int main(int argc, char const *argv[])
{
  int c, i, nwhite, nother;
  int ndigit[LIMIT];

  nwhite = nother = 0;
  for (i = 0; i < LIMIT; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;

  printf("digits");
  for (i = 0; i < LIMIT; ++i)
    printf(" %d", ndigit[i]);
  printf(" , white space = %d, other = %d\n", nwhite, nother);
  return 0;
}
