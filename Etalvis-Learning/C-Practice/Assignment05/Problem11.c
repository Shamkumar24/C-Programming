#include <stdio.h>

int main()
{
    long int num, count = 0;

    printf("Enter the number : ");
    scanf("%ld", &num);

    for (; num > 0; num = num / 10)
    {
        count++;
    }

    printf("Result : %ld\n", count);

    return 0;
}
