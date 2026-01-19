#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

loop:
    if (num > 0)
    {
        sum += num % 10;
        num = num / 10;
        goto loop;
    }

    printf("Total digit : %d\n", sum);

    return 0;
}
