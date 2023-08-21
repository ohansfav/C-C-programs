#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argu)
{
    /*int x,y,sum; // declaring  the variables
    
    printf("first number: ");// first input
    scanf("%d", &x);

    printf("second number: ");// second input
    scanf("%d", &y);

    sum = x + y; // for the sum

    printf("the sum is %d\n", sum);*/

    /*int i = 0;
    int even = 1;

    while(i<2100){
            //scanf("%d", &even);
    printf("the next even number is : %d\n", even);
    even = even + 1;
    i++;
    }*/

    int english, maths, biology, chemistry; // to check if score is above 50

    printf("english score:"); // output for English score
    scanf("%d", &english); // takes in input for English score

    printf("maths score:"); // output for maths
    scanf("%d", &maths); // input for maths

    printf("biology score:"); // output for biology 
    scanf("%d", &biology); // takes input for biology

    printf("chemistry score:"); // output for chemistry 
    scanf("%d", &chemistry); // takes in input for chemistry 

   /* if((biology > 49) &&(chemistry > 49) && (english > 50) && (maths > 50 ){
       printf("admitted");
       }
       else{
        printf("not admitted");
       };*/

       if((english >= 50 && maths >= 50) && (biology >= 35 && chemistry >=35 )){
        printf("admitted");
       }
       //else if(english <= 50 && maths <= 50){
        //printf("not admitted");
       //}
       else{
        printf("not admitted");
       }

    return 0;
}
