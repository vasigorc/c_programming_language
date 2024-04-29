/*
    Section 1.5.4 This is a bare-bone version of the UNIX program wc
*/
#include <stdio.h>

#define IN 1  /* inside a word*/
#define OUT 0 /* outside a word*/

/* count lines, words, and characters in input*/
int main(int argc, char const *argv[])
{
    int c, newLine, newWord, newCharacter, state;

    state = OUT;
    newLine = newWord = newCharacter = 0;
    while ((c = getchar()) != EOF)
    {
        ++newCharacter;
        if (c == '\n')
            ++newLine;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++newWord;
        }
    }

    printf("Lines: %d Words: %d Characters: %d\n", newLine, newWord, newCharacter);
    return 0;
}
