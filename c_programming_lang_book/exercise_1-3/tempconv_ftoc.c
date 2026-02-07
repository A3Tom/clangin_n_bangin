#include <stdio.h>

main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("fahr | celc\n");
    printf("---- | ----\n");
    for (fahr = lower; fahr <= upper; fahr = fahr + step)
    {
        celcius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f  | %6.2f\n", fahr, celcius);
    }
}