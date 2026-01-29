#include <stdio.h>

void disp_sum_all_digit()
{
    int num, ones, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        ones = num % 10;
        sum = sum + ones;
        num = num / 10;
    }

    printf("Sum : %d\n", sum);
}

int main()
{
    disp_sum_all_digit();
    return 0;
}
