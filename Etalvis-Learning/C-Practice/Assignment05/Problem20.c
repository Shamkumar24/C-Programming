#include <stdio.h>

int main()
{
    int num = 123456789;
    int temp, count = 0;

    for (temp = num; temp > 0; temp /= 10)
        (temp % 10 % 2 != 0) && (count++);

    printf("Total odd digits in %d = %d\n", num, count);

    return 0;
}
