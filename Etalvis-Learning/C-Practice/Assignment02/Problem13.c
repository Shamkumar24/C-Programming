#include <stdio.h>

int main()
{
    int num, ones, tens, hundred, thousen, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    ones = num % 10;
    tens = (num / 10) % 10;
    hundred = (num / 100) % 10;
    thousen = num / 1000;

    result = (ones == tens);

    printf("ones : %d\n", ones);
    printf("tens : %d\n", tens);
    printf("hundred : %d\n", hundred);
    printf("thousen : %d\n", thousen);
    printf("Result : %d\n", result);

    return 0;
}
