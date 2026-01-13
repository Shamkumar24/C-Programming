#include <stdio.h>

int main()
{
    int num, ones, hundred, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    ones = num%10;
    hundred = num/100;

    result = num-(ones && hundred)*5;

    printf("The ones : %d\n", ones);
    printf("The hundred : %d\n", hundred);
    printf("The Result : %d\n", result);

    return 0;
}
