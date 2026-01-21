#include <stdio.h>

int main()
{
    int num, num1, ones, tens, flag = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    ones = num % 10;
    tens = (num / 10) % 10;
    num1 = tens * 10 + ones;

    if (num1 <= 1)
        flag = 1;

    for (int i = 2; i < num1 && flag == 0; i++)
    {
        if (num1 % i == 0)
            flag = 1;
    }

    printf("%d is %s\n", num1, flag ? "Not prime" : "Prime");

    return 0;
}
