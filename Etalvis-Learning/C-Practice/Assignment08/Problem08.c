#include <stdio.h>
#include <math.h>

int disp_interchange_first_last(int num)
{
    int temp, first, middle, last, count = 0, power, result;

    temp = num;
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    power = (int)pow(10, count - 1);
    first = num / power;
    last = num % 10;
    middle = (num % power) / 10;

    result = last * power + middle * 10 + first;
    return result;
}

int main()
{
    int x, result;

    printf("Enter the number : ");
    scanf("%d", &x);

    result = disp_interchange_first_last(x);
    printf("The result : %d\n", result);

    return 0;
}
