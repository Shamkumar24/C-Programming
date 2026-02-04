#include <stdio.h>

int disp(int num)
{
    int temp, count = 0;

    while (num >= 10)
    {
        temp = num % 100;

        if (temp == 16 || temp == 25 || temp == 36 ||
            temp == 49 || temp == 64 || temp == 81)
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
