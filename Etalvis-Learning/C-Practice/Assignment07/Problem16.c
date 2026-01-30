#include <stdio.h>

void check_prime()
{
    int num, flag = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a prime number\n", num);
        return;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%d is not a prime number\n", num);
    else
        printf("%d is a prime number\n", num);
}

int main()
{
    check_prime();
    return 0;
}
