/*
    Exercise 1-12. Write a program that writes its input one word per line
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            printf("\n");
        }
        else
        {
            printf("%c", (char)c);
        }
        fflush(stdout);
    }
    return 0;
}
