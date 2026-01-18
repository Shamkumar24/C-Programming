#include <stdio.h>

int main()
{
    int ones, tens, sum = 0;
    int i = 11;

loop:
    if (i <= 100)
    {
        ones = i % 10;
        tens = i / 10;

        if ((i % 2) != 0 && tens == 7)
        {
            sum = sum + i;
        }

        i = i + 1;
        goto loop;
    }

    printf("Sum : %d\n", sum);

    return 0;
}
