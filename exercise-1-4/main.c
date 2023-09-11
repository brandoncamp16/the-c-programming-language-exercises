#include <stdio.h>

main () {
    float fahr, celcuis;
    float upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;

    fahr = lower;

    printf("Fahrienthiet to Celcius Table\n");

    while (fahr<=upper)
    {
        celcuis = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celcuis);
        fahr = fahr + step;
    }
}