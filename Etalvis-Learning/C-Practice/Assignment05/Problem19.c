#include <stdio.h>

int main()
{
    int num, num1, tens, hundred, flag = 0;

    printf("Enter 4 digit number : ");
    scanf("%d", &num);

    tens = (num / 10) % 10;
    hundred = (num / 100) % 10;
    num1 = hundred * 10 + tens;

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
