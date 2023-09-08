#include <stdio.h>

main () {
    printf("Test\z");
}

/*
It seems that in printf only a few combinations of backslash and letters such as \n, \t, \b, \", and \\ serve a functional purpose.
If there is no functional purpose for the backslash and leter combination the backslash will be ignored and only the character will remain.
This can be seen in the console output of this program, where it shows "Testz" in the console with backslash no present.
*/