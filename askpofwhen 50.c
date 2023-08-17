#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stud; //students
    /*int stu1;
    int stu2;*/
    int q;

    printf("how many student scores do you want to caculate:");
    scanf("%d",&q);



    printf("total student inputed is: %d \n", q);

    for(int i=0;i<q;i++)
    {
        printf("Enter the score for the student %d ", i+1);
        scanf("%d", &stud);
    }
    if( stud >= 50){
        printf("student pass", stud);
    }
    else{
        printf("failed", stud);
    };



    /*if (( stud >= 50) &&(  )){
        printf("student 1 pass  score is :%d\n", stud);
    }
    else{
        printf("student 1 fail  score is: %d\n", stud);
    }
    if (stud >= 50){
        printf("student 2 pass score is: %d\n", stud);
    }
    else{
        printf("student 2 fail score is: %d\n", stud);
    }*/
    return 0;
}
