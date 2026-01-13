#include <stdio.h>

int main()
{
    int num, ones, tens, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    ones = num%10;
    tens = num/10;

    result = ones+tens;

    printf("The ones : %d\n", ones);
    printf("The tens : %d\n", tens);
    printf("The Result : %d\n", result);

    return 0;
}
