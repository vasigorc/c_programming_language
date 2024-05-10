#include <stdio.h>

#define MAX_LINE_LENGTH 120

/*
    Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to write a program that
    reverses its input one line at a time.
*/

int naive_read_line(char s[]);
void reverse_line(char s[], int char_count);

int main(int argc, char const *argv[])
{
  char string[MAX_LINE_LENGTH];
  int length;

  while ((length = naive_read_line(string)) > 0)
  {
    reverse_line(string, length);
  }

  return 0;
}

int naive_read_line(char s[])
{
  int c, i;

  for (i = 0; i < MAX_LINE_LENGTH - 1 && (c = getchar()) != EOF && c != '\r' && c != '\n'; ++i)
  {
    s[i] = c;
  }

  if (c == '\r' || c == '\n')
  {
    s[i++] = c; // Include the newline or carriage return character in the string
  }

  // put the null character, whose value is zero at the end of the array, to mark the end of string characters
  s[i] = '\0';

  return i;
}

void reverse_line(char s[], int char_count)
{
  int i;

  while (char_count > 0 && (s[char_count - 1] == '\n' || s[char_count - 1] == '\r' || s[char_count - 1] == '\0'))
  {
    char_count--;
  }

  for (i = char_count - 1; i >= 0; i--)
  {
    putchar(s[i]);
  }
  // Add newline for proper formatting
  putchar('\n');
}
