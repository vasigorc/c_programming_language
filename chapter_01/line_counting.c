#include <stdio.h>

/* count lines in an input */
int main(int argc, char const *argv[])
{
    int c, nl;

    nl = 0;
    // On Mac or Linux Ctr+D equivalents to EOF
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
    }
    printf("%d\n", nl);
    return 0;
}
