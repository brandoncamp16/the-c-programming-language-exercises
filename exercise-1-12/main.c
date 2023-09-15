#include <stdio.h>

/*
Exercise 1-12. Write a program that prints its input one word per line.
*/

main ()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        while (c == ' ') {
            c = getchar();

            if (c != ' ') {
                putchar('\n');
            }
        }

        while (c == '\t') {
            c = getchar();

            if (c != '\t') {
                putchar('\n');
            }
        }

        while (c == '.') {
            c = getchar();

            if (c != '.') {
                putchar('.');
                putchar('\n');
            }
        }

        while (c == '?') {
            c = getchar();

            if (c != '?') {
                putchar('?');
                putchar('\n');
            }
        }

        while (c == '!') {
            c = getchar();

            if (c != '!') {
                putchar('!');
                putchar('\n');
            }
        }
        putchar(c);
    }
}


