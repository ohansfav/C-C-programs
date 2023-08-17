#include <stdio.h>
#include <stdlib.h>


int main ()
{
int x,y,sum,prod;

printf("the value of the first number is: ");
scanf("%d", &x);
printf("the value of the second number is: ");
scanf("%d", &y);
sum=x+y;
prod=x*y;
printf("the value of the sum number is: %d\n" , sum);
//scanf("%d", &sum);
printf("the value of the prod number is: %d\n" , prod);
//scanf("%d", &prod);
return 0;
}
