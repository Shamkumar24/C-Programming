#include <stdio.h>

int main()
{
    int num, temp, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (temp = num; temp > 0; temp /= 10)
    {
        (temp % 10 % 2 != 0) && (count++);
    }

    printf("Total odd digits in %d = %d\n", num, count);

    return 0;
}
