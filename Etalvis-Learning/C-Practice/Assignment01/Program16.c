#include <stdio.h>

int main()
{
    int num, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    result = num-(num%2)*5;

    printf("The Result : %d\n", result);

    return 0;
}
