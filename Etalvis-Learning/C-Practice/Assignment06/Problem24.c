#include <stdio.h>

int main()
{
    long int num, ones, count = 0;

    printf("Enter the number : ");
    scanf("%ld", &num);

    while (num >= 10)
    {
        ones = num % 100;

        if (ones == 16 || ones == 25 || ones == 36 ||
            ones == 49 || ones == 64 || ones == 81)
        {
            count++;
        }

        num = num / 10;
    }

    printf("%ld\n", count);

    return 0;
}

