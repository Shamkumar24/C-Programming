#include <stdio.h>

int main()
{
    int num, rev = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

loop:
    if (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
        goto loop;
    }

    printf("Reverse : %d\n", rev);

    return 0;
}
