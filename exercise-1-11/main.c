#include <stdio.h>

#define IN 1 /*Inside a word.*/
#define OUT 0 /*Outside a word.*/

/*Count lines, words, and characters in input.*/

main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;

        if (c == '\n')
        {
            ++nl;
        }

        if (c == ' ' || c == '\nl' || c == '\t')
        {
            state = OUT;
        }

        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}

/*
I feel like the best way to test the word count program is by inputting spaces, tabs, and creating new lines. Then I would verify that the program was able to count all of them correctly.
With testing various inputs, I feel like the program counts certain inputs in unintended ways. For example single characters with a space are considered small words. Maybe require all words,
aside from a few exepctions, to have to be more than one character long. Another possible issue is with how the program handles hyphens, should these be counted as one word or multiple. Also 
should punctuation be considered the end of a word just like spaces or tabs. These are just a few of the potiental issues with this current program.
*/