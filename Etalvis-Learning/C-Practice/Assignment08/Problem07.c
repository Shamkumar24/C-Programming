#include <stdio.h>

int disp_reverse_number(int num)
{
    int rev = 0;

    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }

    return rev;
}

int main()
{
    int x, result;

    printf("Enter the number : ");
    scanf("%d", &x);

    result = disp_reverse_number(x);
    printf("The reverse : %d\n", result);

    return 0;
}
