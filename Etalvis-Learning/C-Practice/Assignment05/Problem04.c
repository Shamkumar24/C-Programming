#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 6; i > 0; i--)
    {
        printf("%d\n", i);
        sum = sum + i;
    }

    printf("Sum : %d\n", sum);

    return 0;
}
