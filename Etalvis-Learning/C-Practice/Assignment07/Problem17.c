#include <stdio.h>

void check_prime_and_sum14()
{
    int num, temp, sum = 0, flag = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    /* ----- Check prime ----- */
    if (num <= 1)
    {
        flag = 1;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    /* ----- Sum of digits ----- */
    temp = num;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    /* ----- Final Output ----- */
    if (flag == 0 && sum == 14)
        printf("Prime & sum of digits is 14\n");
    else if (flag == 1 && sum == 14)
        printf("Not Prime but sum of digits is 14\n");
    else if (flag == 0 && sum != 14)
        printf("Prime & sum of digits is not 14\n");
    else
        printf("Not Prime & sum of digits is not 14\n");
}

int main()
{
    check_prime_and_sum14();
    return 0;
}
