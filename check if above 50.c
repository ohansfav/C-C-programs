#include <stdio.h>
int main ()
{
int n, m, Sum;
n=25;
m=30;
printf ("The value of the first number is %d\n", n);
//scanf ("%d", &n);
/*Condition
Else statement(s) Statement(s)
True
False True*/
printf ("The value of the second number is %d%\n", m);
//scanf ("%d", &m);
Sum = n+m;
printf ("The value of Sum is %d\n", Sum);
//scanf ("%d", &Sum);
if (Sum>50)
{
printf ("The value of Sum is greater than 50");
}
else
{
printf ("The value of Sum is less than 50");
}
return 0;
}
