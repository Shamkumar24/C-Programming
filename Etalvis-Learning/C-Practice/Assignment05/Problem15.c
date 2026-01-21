#include <stdio.h>

int main()
{
    int num, flag = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <= 1)
        flag = 1;

    for (int i = 2; i < num && flag == 0; i++)
    {
        if (num % i == 0)
            flag = 1;
    }

    printf("%d is %s\n", num, flag ? "Not prime" : "Prime");

    return 0;
}
