#include <stdio.h>

int calculate(int smaller, int bigger);

int ask_for_input(const char* parameter);

int main(void)
{
    /*user input*/
    int num1 = ask_for_input("first");
    int num2 = ask_for_input("second");

    printf("Your first number is %d and your second number is %d\n", num1, num2);

    /*number deklaration for calculation*/
    int bigger, smaller;

    if (num1 < num2) {
        bigger = num2;
        smaller = num1;
    } else {
        bigger = num1;
        smaller = num2;
    }

    /*calculate smallest devider*/
    int result = calculate(smaller, bigger);

    /*print smallest devider*/
    printf("The greatest common divisor of %d and %d is %d\n", num1, num2, result);
    return 0;
}

int ask_for_input(const char* paramter)
{
    int num = 0;
    printf("Please insert the %s number: ", paramter); /*first, second*/
    scanf("%d", &num);
    if (num <= 0) {
        printf("Please insert a POSITIVE number!\n");
        return ask_for_input(paramter);
    }
    return num;
}

int calculate(int smaller, int bigger)
{
    int rest = bigger % smaller;
    printf("The rest of %d divided by %d is %d\n", bigger, smaller, rest);

    if (rest == 0)
        return smaller;

    return calculate(rest, smaller);
}