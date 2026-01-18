#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

loop:
    if (num > 0)
    {
        count++;
        num = num / 10;
        goto loop;
    }

    printf("Total digit : %d\n", count);

    return 0;
}
