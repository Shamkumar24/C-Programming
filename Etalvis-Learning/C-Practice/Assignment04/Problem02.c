#include <stdio.h>

int main()
{
    int i = 5;

loop:
    if (i >= 1)
    {
        printf("%d\n", i);
        i = i - 1;
        goto loop;
    }

    return 0;
}
