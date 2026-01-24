#include <stdio.h>

int main()
{
    int num, temp, lastDigit, place = 1;

    printf("Enter the number : ");
    scanf("%d", &num);

    lastDigit = num % 10;

    if ((lastDigit % 2) != 0)
    {
        temp = num;

        while (temp > 10)
        {
            temp = temp / 10;
            place = place * 10;
        }

        printf("Result : %d\n", num - place);
    }
    else
    {
        printf("Result : %d\n", num);
    }

    return 0;
}
