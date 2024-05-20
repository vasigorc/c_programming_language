#include <stdio.h>
#include "constants.h"

int fold_lines(char s[]);
void print_folded_line(char s[], int stop_index);

/*
  Exercise 1-22. Write a program to "fold" long input lines into two or more shorter lines after the
  last non-blank character that occurs before the n-th column of input. Make sure your program does
  something intelligent with very long lines, and if there are no blanks or tabs before the
  specified column.
*/

int main(void)
{
  char line[MAX_LINE_LENGTH + 1];
  while (fold_lines(line) > 0)
    ;
  return 0;
}

int fold_lines(char s[])
{
  int c, i, last_blank_space = -1;

  for (i = 0; i < MAX_LINE_LENGTH - 1 && (c = getchar()) != EOF && c != '\r' && c != '\n'; ++i)
  {
    s[i] = c;
    if (c == ' ' || c == '\t')
    {
      last_blank_space = i;
    }
  }

  s[i] = '\0';

  if (c == EOF && i == 0)
  {
    // no more input
    return 0;
  }

  if (i == MAX_LINE_LENGTH)
  {
    if (last_blank_space >= 0)
    {
      print_folded_line(s, last_blank_space);
      for (i = 0; last_blank_space + 1 + i < MAX_LINE_LENGTH; ++i)
      {
        s[i] = s[last_blank_space + 1 + i];
      }
    }
    else
    {
      print_folded_line(s, MAX_LINE_LENGTH);
    }
  }
  else
  {
    print_folded_line(s, i);
  }

  return 1;
}

void print_folded_line(char s[], int stop_index)
{
  for (int i = 0; i < stop_index; i++)
  {
    putchar(s[i]);
  }
  // Add a newline at the end of the folded line
  putchar('\n');
}
