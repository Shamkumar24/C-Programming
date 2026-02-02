#include <stdio.h>

int count_total_digits(int num)
{
    int count = 0;

    while (num > 0)
    {
        count++;
        num = num / 10;
    }

    return count;
}

int main()
{
    int x, result;

    printf("Enter the number : ");
    scanf("%d", &x);

    result = count_total_digits(x);
    printf("The count : %d\n", result);

    return 0;
}
