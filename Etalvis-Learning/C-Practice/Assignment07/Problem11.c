#include <stdio.h>

void count_total_digit()
{
    int num, count = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        count++;
        num = num / 10;
    }

    printf("Count : %d\n", count);
}

int main()
{
    count_total_digit();
    return 0;
}
