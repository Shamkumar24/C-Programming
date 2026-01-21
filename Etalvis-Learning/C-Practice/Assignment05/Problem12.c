#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    for (; num > 0; num = num / 10)
    {
        sum = sum + (num % 10);
    }

    printf("Result : %d\n", sum);

    return 0;
}
