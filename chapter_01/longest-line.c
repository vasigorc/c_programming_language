#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

/* bizarre name given to avoid naming clash with the method with the same name in /usr/include/stdio.h:645:18 */
int getline1(char line[], int maxline);
void copy(char to[], char from[]);

/* Print longest input line */
int main(int argc, char const *argv[])
{
  int len, max; /* current line length and maximum length seen so far */
  max = 0;
  char line[MAXLINE];    /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  while ((len = getline1(line, MAXLINE)) > 0)
  {
    if (len > max)
    {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) /* there was a line */
  {
    /*
      Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
      the length of the text. I just included the size of the longest line.
    */
    printf("The longest line in input was: '%s', it's size is %d", longest, max);
  }

  return 0;
}

/* getline1: read a line into s, return length */
int getline1(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == 'n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0'; // put the null character, whose value is zero at the end of the array, to mark the end of string characters
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
  {
    ++i;
  }
}
