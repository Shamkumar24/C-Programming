#include <stdio.h>

int main()
{
    int num, i = 2, flag = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Not Prime\n");
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
        printf("Not Prime\n");
    else
        printf("Prime\n");

    return 0;
}
