#include <stdio.h>

int main()
{
    int num, ones, tens, hundred, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    ones = num%10;
    tens = (num/10)%10;
    hundred = num/100;

    result = hundred*100+0+ones;

    printf("The ones : %d\n", ones);
    printf("The tens : %d\n", tens);
    printf("The hundred : %d\n", hundred);
    printf("The Result : %d\n", result);

    return 0;
}
