#include <stdio.h>

int main()
{
    int fahr, celc;
    int upper, lower, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper)
    {
        celc = 5 * (fahr - 32) / 9;
        printf("%5d\t%10d\n", fahr, celc);
        fahr += step;
    }
}