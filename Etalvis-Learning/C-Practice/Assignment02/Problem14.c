#include <stdio.h>

int main()
{
    int num, ones, tens, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    ones = num % 100;
    tens = num / 100;

    result = (ones == tens);

    printf("ones : %d\n", ones);
    printf("tens : %d\n", tens);
    printf("Result : %d\n", result);

    return 0;
}
