#include <stdio.h>

int main()
{
    int i = 1, sum = 0;

loop:
    if (i <= 6)
    {
        sum = sum + i;
        i = i + 1;
        goto loop;
    }

    printf("Result : %d\n", sum);

    return 0;
}
