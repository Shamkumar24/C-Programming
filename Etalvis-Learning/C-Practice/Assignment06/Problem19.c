#include <stdio.h>

int main()
{
    int i = 2, count = 0;

    while (i < 10)
    {
        int j = 2, flag = 0;

        while (j < i)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
            j++;
        }

        if (flag == 0)
        {
            count++;
        }

        i++;
    }

    printf("%d\n", count);

    return 0;
}
