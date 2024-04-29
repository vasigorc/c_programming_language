#include <stdio.h>

/* copy input to output*/
int main(int argc, char const *argv[])
{
    int c;

    /* Exercise 1-7. Write a program to print the value of EOF */
    printf("the value of EOF is %d\n", EOF);
    while ((c = getchar()) != EOF)
        putchar(c);
    return 0;
}
