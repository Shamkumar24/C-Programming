#include <stdio.h>

int main()
{
    int num, ones, tens, hundred, thousen, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    ones = num%10;
    tens = (num/10)%10;
    hundred = (num/100)%10;
    thousen = num/1000;

    result = thousen*1000+hundred*100+ones*10+tens;

    printf("The ones : %d\n", ones);
    printf("The tens : %d\n", tens);
    printf("The hundred : %d\n", hundred);
    printf("The thousen : %d\n", thousen);
    printf("The Result : %d\n", result);

    return 0;
}
