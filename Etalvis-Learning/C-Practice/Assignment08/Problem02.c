#include <stdio.h>

int disp_rsum(int num)
{
    int sum = 0, i;

    for (i = 1; i <= num; i++)
        sum = sum + i;

    return sum;
}

int main()
{
    int x = 6, result;

    result = disp_rsum(x);
    printf("The Sum : %d\n", result);

    return 0;
}
