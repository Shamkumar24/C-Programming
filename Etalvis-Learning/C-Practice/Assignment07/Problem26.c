#include <stdio.h>

void disp_biggest_4digit_div7_9()
{
    int num = 9999;

    while (num >= 1000)
    {
        if (num % 7 == 0 && num % 9 == 0)
        {
            printf("The number is : %d\n", num);
            break;
        }
        num = num - 1;
    }
}

int main()
{
    disp_biggest_4digit_div7_9();
    return 0;
}
