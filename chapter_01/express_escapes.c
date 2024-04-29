#include <stdio.h>

/*
    Exercise 1-10. Write a program to copy its input to its output, replacing
    each tab by \t, each backspace by \b, and each backslash by \\. This makes
    tabs and backspaces visible in an unambiguous way.
*/
int main(int argc, char const *argv[])
{
    int nextChar;
    while ((nextChar = getchar()) != EOF)
    {
        switch (nextChar)
        {
        case '\t':
            printf("\\t");
            break;
        case '\b':
            printf("\\b");
            break;
        case '\\':
            printf("\\\\");
            break;
        default:
            printf("%c", (char)nextChar);
            break;
        }
        // Ensures that the output is immediately visible
        fflush(stdout);
    }
    printf("\n");
    return 0;
}
