#include <stdio.h>

int main()
{
    float c, f;
    printf("Abhishek Kumar Singh\n");

    printf("Temperature in degree Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;
    printf("Temperature in degree Fahrenheit: %f", f);

    return 0;
}


