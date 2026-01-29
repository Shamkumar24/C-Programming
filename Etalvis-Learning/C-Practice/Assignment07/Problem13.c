#include <stdio.h>

void disp_reverse_number()
{
    int num, ones, rev = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        ones = num % 10;
        rev = rev * 10 + ones;
        num = num / 10;
    }

    printf("Reverse : %d\n", rev);
}

int main()
{
    disp_reverse_number();
    return 0;
}
