/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
The general idea is to check if the next character is a space. If the next character is a space, do not print the current character. If the next character is not a space, the current character can be printed.
*/

#include <stdio.h>

main () {

    int c;

    while ((c = getchar()) != EOF) {

        while (c == ' ') {
            c = getchar();

            if (c != ' ') {
                printf(" ");
            }
        }

        if (c != ' ') {
            putchar(c);
        }
    }
}