#include <stdio.h>

void check_first_2digits_prime()
{
    int num, ones, tens, result, flag = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    /* ----- Calculate last 2 digits ----- */
    ones = num % 10;
    tens = (num / 10) % 10;
    result = tens * 10 + ones;

    /* ----- Check prime ----- */
    if (result <= 1)
    {
        flag = 1;
    }
    else
    {
        for (int i = 2; i <= result / 2; i++)
        {
            if (result % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
        printf("%d is not a prime number\n", result);
    else
        printf("%d is a prime number\n", result);
}

int main()
{
    check_first_2digits_prime();
    return 0;
}
