#include <stdio.h>

int main(void)
{
    /*user input*/
    int num1, num2;

    printf("Please insert first number: ");
    scanf("%d", &num1);
    if (num1 < 0)
    {
        printf("Please insert a POSITIVE first number! : ");
        scanf("%d", &num1);
    }

    printf("Please insert second number: ");
    scanf("%d", &num2);

    if (num1 < 0)
    {
        printf("Please insert a POSITIVE second number! : ");
        scanf("%d", &num2);
    }

    /*number deklaration for calculation*/
    int bigger, smaller;

    if (num1 < num2)
    {
        bigger = num2;
        smaller = num1;
    }
    else
    {
        bigger = num1;
        smaller = num2;
    }

    /*calculate smallest devider*/
    while (smaller != 0)
    {
        int rest = bigger % smaller;
        printf("The rest of %d divided by %d is %d\n", bigger, smaller, rest);
        bigger = smaller;
        smaller = rest;
    }

    /*print smallest devider*/
    printf("The Smallest shared devider of %d and %d is %d\n", num1, num2, bigger);

    return 0;
}