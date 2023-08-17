#include<stdio.h>
int main()
{
 int a=100;
 int g=10;
 int r=5;
 int sum;
 int prod;
 int div;

 printf("%d\n",a);
 printf("%d \n",g);
 printf("%d \n",r);

 printf("sum is %d + %d + %d\n", a,g,r);
 sum=a+g+r;
printf("total sum is %d\n",sum);

 printf("prod is %d * %d * %d\n", a,g,r);
 prod=a*g*r;
 printf("total prod is %d\n", prod);

 printf("div is %d / %d / %d\n", a,g,r );
 div=a/g/r;
 printf("total div is %d", div);


 return 0;
}
