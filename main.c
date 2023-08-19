#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#define PI 3.142 // pi can be defined before usage 


int main()
{
   float r; //r is radius
   float area;
   //float PI = 3.142;

   printf("what is radius : \n");
   scanf("%f", &r);

   area = 3.142 * r * r; // formula for the area

   printf(" area is: %f", area);



    return 0;
}
