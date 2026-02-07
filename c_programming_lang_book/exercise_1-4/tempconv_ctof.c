#include <stdio.h>

#define     LOWER   0
#define     UPPER   150
#define     STEP    10

_print_header()
{
    printf("celc | fahr\n");
    printf("---- | ----\n");
}

main()
{
    float fahr, celcius;

    _print_header();
    
    for (celcius = LOWER; celcius <= UPPER; celcius = celcius + STEP)
    {
        fahr = (celcius * 1.8) + 32;
        printf("%3.0f | %3.0f\n", celcius, fahr);
    }
}