#include <stdio.h>

int main()
{
    printf("Abhishek Kumar Singh\n");
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is positive");
    }
    
    return 0;
}



