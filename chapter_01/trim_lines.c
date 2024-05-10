#include <stdio.h>

#define MAX_LINE_LENGTH 120

int print_trimmed_line(char line[], int max_line_length);
/*
    Exercise 1-18. Write a program to remove trailing blanks and tabs
    from each line of input, and to delete entirely blank lines
*/
int main(int argc, char const *argv[])
{
    char line[MAX_LINE_LENGTH];
    while (1)
    {
        if (print_trimmed_line(line, MAX_LINE_LENGTH) == EOF)
        {
            break;
        }
    }

    return 0;
}

/* take input for a line and print it trimmed if it has at least a single non-space character.*/
int print_trimmed_line(char line[], int max_line_length)
{
    int index_of_last_character = -1;

    int c, i;

    for (i = 0; i < max_line_length && (c = getchar()) != EOF; ++i)
    {
        line[i] = c;
        if (c == '\n' || c == '\r')
        {
            break;
        }
        else if (c != '\t' && c != ' ')
        {
            index_of_last_character = i;
        }
    }

    // If EOF is encountered and no characters were read, return EOF
    if (c == EOF && i == 0)
    {
        return EOF;
    }

    // put the null character, whose value is zero at the end of the array, to mark the end of string characters
    line[i] = '\0';

    // only print the line if it contains actual characters
    if (index_of_last_character >= 0)
    {
        for (i = 0; i <= index_of_last_character; ++i)
        {
            printf("%c", line[i]);
        }
        printf("\n"); // Add newline for proper formatting after the output
    }
    return 0;
}
