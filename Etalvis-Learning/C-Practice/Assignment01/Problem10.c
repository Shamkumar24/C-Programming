#include<stdio.h>

int main ()
{
    int num, ones, tens, hundred, result;

    printf("Enter the number:");
    scanf("%d", &num);

    ones=num%10;
    tens=num/10;
    result=ones*10+tens;

    printf ("The ones :%d\n", ones) ;
    printf ("The tens :%d\n", tens) ;
    printf ("The Sum :%d\n", result) ;
}
