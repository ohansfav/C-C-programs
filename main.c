#include <stdio.h>
#include <stdlib.h>
#include <math.h> // for mathematical calculations 
//#define PI 3.142


int main()
{
   float r; //r is radius
   float area; // area is float because we might have decimal 
   //float PI = 3.142;

   printf("what is radius : \n");// asks for radius input
   scanf("%f", &r); // takes radius input

   area = 3.142 * r * r; // formula for area 

   printf(" area is: %f", area); // print the area in float



    return 0;
}
