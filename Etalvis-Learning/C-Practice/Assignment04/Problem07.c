#include <stdio.h>

int main()
{
    int ones, tens, result;
    int i = 11;

loop:
    if (i <= 100)
    {
        ones = i % 10;
        tens = i / 10;
        result = ones + tens;

        if ((i % 2) != 0 && result == 7)
        {
            printf("%d\n", i);
        }

        i = i + 1;
        goto loop;
    }

    return 0;
}
