#include <stdio.h>

int main()
{
    int num, flag = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Not Prime number\n");
        return 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is Prime number\n", num);
    else
        printf("%d is Not Prime number\n", num);

    return 0;
}
