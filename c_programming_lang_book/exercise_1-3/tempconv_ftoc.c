#include <stdio.h>

#define     LOWER   0
#define     UPPER   300
#define     STEP    20

_print_header()
{
    printf("fahr | celc\n");
    printf("---- | ----\n");
}

main()
{
    float fahr, celcius;

    _print_header();

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        celcius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f  | %6.2f\n", fahr, celcius);
    }
}
