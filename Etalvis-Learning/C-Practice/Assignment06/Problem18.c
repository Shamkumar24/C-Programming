#include <stdio.h>

int main()
{
    int n, num, i = 2, tens, hundred, flag = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    tens = (n / 10) % 10;
    hundred = (n / 100) % 10;
    num = hundred * 10 + tens;

    if (num <= 1)
    {
        printf("%d Not Prime\n", num);
        return 0;
    }

    while (i < num)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 1)
        printf("%d Not Prime\n", num);
    else
        printf("%d Prime\n", num);

    return 0;
}
