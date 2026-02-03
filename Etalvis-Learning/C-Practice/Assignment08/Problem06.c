#include <stdio.h>

int count_sum_all_digits(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }

    return sum;
}

int main()
{
    int x, result;

    printf("Enter the number : ");
    scanf("%d", &x);

    result = count_sum_all_digits(x);
    printf("The sum : %d\n", result);

    return 0;
}
