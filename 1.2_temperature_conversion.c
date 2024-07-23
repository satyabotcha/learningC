#include <stdio.h>

const int UPPER_LIMIT = 50;
const int STEP = 5;

int main()
{
    int celsius;

    /*
    celsius to fahrenheit table with a step of 5 (i.e. 5°c, 10°c, 15°c...) till 50°c
    */
    printf("Celsius to Fahrenheit Table: \n");
    for (celsius = 0; celsius <= UPPER_LIMIT; celsius = celsius + STEP)
    {
        float fahrenheit = (celsius * 1.8) + 32.0;
        printf("%i°c  %0.2f°F\n", celsius, fahrenheit); // "%0.2f" indicates 2 characters after decimal point
    }
    return 0;
}