#include <stdio.h>

main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 150;
    step = 10;

    printf("fahr | celc\n");
    printf("---- | ----\n");
    for (celcius = lower; celcius <= upper; celcius = celcius + step)
    {
        fahr = (celcius * 1.8) + 32;
        printf("%3.0f | %3.0f\n", celcius, fahr);
    }
}