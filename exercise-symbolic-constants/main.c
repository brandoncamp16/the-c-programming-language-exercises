#include <stdio.h>

#define LOWER 0 /* Lower Limit of the Table*/
#define UPPER 300 /* Upper Limit of the Table*/
#define STEP 20 /* Step size per table entry*/

main () {
    int fahr;

    for (fahr = UPPER; fahr >=LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}