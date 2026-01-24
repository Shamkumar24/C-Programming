#include <stdio.h>

int main()
{
    int num, i = 2, flag = 0, sum = 0, tempNum;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Not Prime & sum of digits is not 14\n");
        return 0;
    }

    /* Prime check */
    while (i < num)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }

    /* Sum of digits */
    tempNum = num;
    while (tempNum > 0)
    {
        sum += tempNum % 10;
        tempNum = tempNum / 10;
    }

    /* Final result */
    if (flag == 0 && sum == 14)
        printf("Prime & sum of digits is 14\n");
    else if (flag == 1 && sum == 14)
        printf("Not Prime but sum of digits is 14\n");
    else if (flag == 0 && sum != 14)
        printf("Prime & sum of digits is not 14\n");
    else
        printf("Not Prime & sum of digits is not 14\n");

    return 0;
}
