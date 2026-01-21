#include <stdio.h>

int main()
{
    int num, temp, flag = 0, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <= 1)
        flag = 1;

    for (int i = 2; i < num && flag == 0; i++)
    {
        if (num % i == 0)
            flag = 1;
    }

    for (temp = num; temp > 0; temp = temp / 10)
        sum = sum + (temp % 10);

    if (flag == 0 && sum == 14)
        printf("Prime & sum of digits is 14\n");
    else if (flag == 0 && sum != 14)
        printf("Prime & sum of digits is not 14\n");
    else if (flag == 1 && sum == 14)
        printf("Not Prime & sum of digits is 14\n");
    else
        printf("Not Prime & sum of digits is not 14\n");

    return 0;
}
