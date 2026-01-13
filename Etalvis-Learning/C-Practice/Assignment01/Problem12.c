#include<stdio.h>
int main ()
{
    int num, ones, tens, hundred, thousun, result;

    printf ("Enter the number:"); 
    scanf ("%d", &num);

    ones=num%10;
    tens=(num/10)%10;
    hundred=(num/100)%10;
    thousun=num/1000;
    result=hundred*1000+thousun*100+tens*10+ones;

    printf ("The ones :%d\n", ones) ;
    printf ("The tens :%d\n", tens) ;
    printf ("The hundred :%d\n", hundred) ;
    printf ("The thousun :%d\n", thousun) ;
    printf ("The Result :%d\n", result) ;
}
