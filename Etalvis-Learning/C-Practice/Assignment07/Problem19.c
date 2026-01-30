#include <stdio.h>

void middle_2digits_prime()
{
    int num, tens, hundred, result, flag = 0;

    printf("Enter the 4 digit number : ");
    scanf("%d", &num);

    /* ----- Calculate middle 2 digits ----- */
    tens = (num / 10) % 10;
    hundred = (num / 100) % 10;
    result = hundred * 10 + tens;

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
    middle_2digits_prime();
    return 0;
}
