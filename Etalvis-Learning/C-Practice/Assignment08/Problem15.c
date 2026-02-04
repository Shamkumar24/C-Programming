#include <stdio.h>

int disp(int num)
{
    int i, count = 0, flag;

    while (num > 0)
    {
        int digit = num % 10;
        flag = 0;

        if (digit <= 1)
        {
            flag = 1;
        }
        else
        {
            for (i = 2; i <= digit / 2; i++)
            {
                if (digit % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
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
