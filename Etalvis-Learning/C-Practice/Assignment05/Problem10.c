#include <stdio.h>

int main()
{
    int i, tens, sum = 0;

    for (i = 11; i <= 100; i++)
    {
        tens = i / 10;

        if ((i % 2) != 0 && tens == 7)
        {
            sum = sum + i;
        }
    }

    printf("Sum : %d\n", sum);

    return 0;
}
