#include <stdio.h>

int main()
{
    int num, ones, tens, sum, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    ones = num%10;
    tens = num/10;
    sum = ones+tens;

    result = num-(sum%2)*5;

    printf("The sum : %d\n", sum);
    printf("The Result : %d\n", result);

    return 0;
}
