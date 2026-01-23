#include <stdio.h>

int main()
{
    int i = 6, sum = 0;

    while (i >= 1)
    {
        printf("%d\n", i);
        sum = sum + i;
        i--;
    }

    printf("Sum : %d\n", sum);

    return 0;
}
