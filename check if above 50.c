#include <stdio.h>
int main ()
{
int n, m, Sum; // declaring variables to be used
n=25; // assigning value to n
m=30; // assigning value to m
printf ("The value of the first number is %d\n", n); //displays assigned variables
//scanf ("%d", &n);
/*Condition
Else statement(s) Statement(s)
True
False True*/
printf ("The value of the second number is %d%\n", m); // displays second assigned variables 
//scanf ("%d", &m);
Sum = n+m; //adds the two variable
printf ("The value of Sum is %d\n", Sum);
//scanf ("%d", &Sum);
if (Sum > 50){
printf ("The value of Sum is greater than 50");
}
else
{
printf ("The value of Sum is less than 50");
}
return 0;
}
