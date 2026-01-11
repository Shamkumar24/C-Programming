#include<stdio.h>

int main () 
{
    int num, result;

    printf ("Enter the number:");
    scanf ("%d", &num) ;

    result=num%8;
    printf ("The Result :%d\n", result) ;
}
