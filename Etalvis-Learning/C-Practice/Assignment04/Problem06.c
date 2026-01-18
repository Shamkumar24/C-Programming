#include <stdio.h>

int main()
{
    int i = 10;

loop:
    if (i <= 20)
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
