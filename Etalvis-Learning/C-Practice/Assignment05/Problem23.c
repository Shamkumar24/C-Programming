#include <stdio.h>

int main()
{
    int num, temp, digit, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (temp = num; temp > 0; temp /= 10)
    {
        digit = temp % 10;

        (digit == 0 || digit == 1 || digit == 4 || digit == 9) && (count++);
    }

    printf("Total single-digit perfect squares = %d\n", count);

    return 0;
}
