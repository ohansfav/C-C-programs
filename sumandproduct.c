#include <stdio.h>
#include <stdlib.h>


int main ()
{
int x,y,sum,prod; // declaring variables 

printf("the value of the first number is: "); // for output
scanf("%d", &x); // for input
printf("the value of the second number is: ");// for output
scanf("%d", &y); // for input
sum=x+y; // for the sum(addition)of the two inputs
prod=x*y; // product(multiplication) of the input
printf("the value of the sum number is: %d\n" , sum); // the sum 
//scanf("%d", &sum);
printf("the value of the prod number is: %d\n" , prod); // the product
//scanf("%d", &prod);
return 0;
}
