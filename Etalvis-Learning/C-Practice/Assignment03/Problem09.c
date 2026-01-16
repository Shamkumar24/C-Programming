#include <stdio.h>

int main()
{
    int num, ones, tens;

    printf("Enter the number : ");
    scanf("%d", &num);

    ones = num % 10;
    tens = num / 10;

    if (ones < tens)
        printf("Successful\n");
    else
        printf("Failure\n");

    return 0;
}
