#include <stdio.h>

int main()
{
    long int num, ones, count = 0;

    printf("Enter the number : ");
    scanf("%ld", &num);

    while (num > 0)
    {
        ones = num % 10;

        if (ones % 2 != 0)
        {
            count++;
        }

        num = num / 10;
    }

    printf("%ld\n", count);

    return 0;
}
