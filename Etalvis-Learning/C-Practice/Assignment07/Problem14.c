#include <stdio.h>

int main()
{
    int num, last, middle, first;

    printf("Enter the 4 digit number : ");
    scanf("%d", &num);

    last = num % 10;
    first = num / 1000;
    middle = (num % 1000) / 10;

    printf("First : %d\n", first);
    printf("Last : %d\n", last);
    printf("Middle : %d\n", middle);

    return 0;
}
