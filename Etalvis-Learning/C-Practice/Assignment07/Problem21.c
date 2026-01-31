#include <stdio.h>

void disp_total_odd_digits()
{
    int num, ones, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        ones = num % 10;

        if (ones % 2 != 0)
        {
            count++;
        }

        num = num / 10;
    }

    printf("Total : %d\n", count);
}

int main()
{
    disp_total_odd_digits();
    return 0;
}
