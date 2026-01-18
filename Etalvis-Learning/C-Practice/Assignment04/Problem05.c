#include <stdio.h>

int main()
{
    int i = 1;

loop:
    if (i <= 9)
    {
        if ((i % 2) != 0)
        {
            printf("%d\n", i);
        }

        i = i + 1;
        goto loop;
    }

    return 0;
}
