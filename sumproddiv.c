#include<stdio.h>
int main()
{
 int a=100;
 int g=10;
 int r=5;
 int sum; // for addition
 int prod; // for multiplication 
 int div;//for division 

 printf("%d\n",a); // shows a input
 printf("%d \n",g); // shows g input
 printf("%d \n",r); // shows r input

 printf("sum is %d + %d + %d\n", a,g,r);
 sum=a+g+r; // calculate the sum of the given values
printf("total sum is %d\n",sum);

 printf("prod is %d * %d * %d\n", a,g,r);
 prod=a*g*r; // calculate the product
 printf("total prod is %d\n", prod);

 printf("div is %d / %d / %d\n", a,g,r );
 div=a/g/r; // for division 
 printf("total div is %d", div);


 return 0;
}
