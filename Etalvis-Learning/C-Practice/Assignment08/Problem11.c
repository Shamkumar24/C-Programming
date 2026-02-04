#include <stdio.h>

int disp(int num)
{
    int count = 0;

    while (num > 0)
    {
        if ((num % 10) % 2 != 0)
        {
            count++;
        }
        num = num / 10;
    }

    return count;
}

int main()
{
    int x, result;

    printf("Enter the number : ");
    scanf("%d", &x);

    result = disp(x);
    printf("Result : %d\n", result);

    return 0;
}
