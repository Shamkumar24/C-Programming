#include <stdio.h>

int disp(int num)
{
    int i, count = 0;

    for (i = 2; i < num; i++)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7)
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
