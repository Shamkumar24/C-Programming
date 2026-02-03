#include <stdio.h>
#include <math.h>

int disp_interchange_first_last(int num)
{
    int temp, first, last, count = 0, power, result;

    temp = num;
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    power = (int)pow(10, count - 1);
    first = num / power;
    last = num % 10;

    if (last % 2 == 0)
    {
        return num;
    }
    else
    {
        result = (first - 1) * power + (num % power);
        return result;
    }
}

int main()
{
    int x, result;

    printf("Enter the number : ");
    scanf("%d", &x);

    result = disp_interchange_first_last(x);
    printf("Result : %d\n", result);

    return 0;
}
