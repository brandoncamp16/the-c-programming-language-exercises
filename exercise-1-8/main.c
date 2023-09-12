#include <stdio.h>

main () {

    int c, nl, tabs, blanks;

    nl = 0;
    tabs = 0;
    blanks = 0;

    while ((c=getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++tabs;
        if (c == ' ')
            ++blanks;
    }
    printf("There are %d new lines.\nThere are %d tabs.\nThere are %d blanks.\n", nl, tabs, blanks);
}