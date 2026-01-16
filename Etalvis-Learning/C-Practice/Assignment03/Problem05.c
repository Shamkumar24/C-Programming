#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <= 50)
        printf("Successful\n");
    else
        printf("Failure\n");

    return 0;
}
