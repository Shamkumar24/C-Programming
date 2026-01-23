#include <stdio.h>

int main()
{
    int i = 11, tens, sum = 0;

    while (i < 100)
    {
        tens = i / 10;

        if ((i % 2) != 0 && tens == 7)
            sum = sum + i;

        i++;
    }

    printf("Sum : %d\n", sum);

    return 0;
}
