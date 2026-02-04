#include <stdio.h>

int disp(int num)
{
    int i, count = 0;

    for (i = 1; i < num; i++)
    {
        if (i == 1 || i == 4 || i == 9)
            count++;
    }

    return count;
}

int main()
{
    int x = 10, result;

    result = disp(x);
    printf("Result : %d\n", result);

    return 0;
}
