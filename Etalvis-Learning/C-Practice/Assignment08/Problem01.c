#include <stdio.h>

int disp_sum(int num)
{
    int sum = 0, i;

    for (i = 1; i <= num; i++)
        sum = sum + i;

    return sum;
}

int main()
{
    int x = 5, result;

    result = disp_sum(x);
    printf("The Sum : %d\n", result);

    return 0;
}
