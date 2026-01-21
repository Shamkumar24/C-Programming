#include <stdio.h>
#include <math.h>

int main()
{
    int num, MSB, temp, digite = 0, result;

    printf("Enter the number : ");
    scanf("%d", &num);

    temp = num;

    for (int n = temp; n > 0; n = n / 10)
    {
        digite++;
    }

    MSB = temp;
    for (; MSB >= 10; MSB = MSB / 10)
        ;

    result = num - (MSB % 2) * (int)pow(10, digite - 1);

    printf("Result : %d\n", result);

    return 0;
}
