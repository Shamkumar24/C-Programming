#include <stdio.h>

int main()
{
    int num, ones, tens, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    ones = num % 10;
    tens = num / 10;

    result = (ones < tens);

    printf("Result : %d\n", result);

    return 0;
}
