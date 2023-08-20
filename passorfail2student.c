#include<stdio.h>
#include<stdlib.h>

int main()
{
    //to determine if any student of two failed

    int stu1; // for first student 
    int stu2; // for second student 


printf(" please enter number srtu1:\t"); // first student 
scanf("%d",&stu1); // takes input for first student 


printf(" please enter number srtu2:\t"); //second student 
scanf("%d",&stu2); // input for second student 


    if ( stu1 >= 50){ // condition if student 1 is equal or above 50
        printf("student 1 pass  score is :%d\n", stu1);
    } 
    else{
        printf("student 1 fail  score is: %d\n", stu1);
    }
    if (stu2 >= 50){
        printf("student 2 pass score is: %d\n", stu2);
    }
    else{
        printf("student 2 fail score is: %d\n", stu2);
    }



    return 0;
}
