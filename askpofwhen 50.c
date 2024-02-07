#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stud; //students
    /*int stu1;
    int stu2;*/
    int q;

    printf("how many student scores do you want to caculate:");
    scanf("%d",&q); // takes input for total number of students..



    printf("total student inputed is: %d \n", q); // displays total number of students inputed 

    for(int i=0;i<q;i++) // repeat the printf below to Ny number of the prompted input
    {
        printf("Enter the score for the student %d ", i+1);
        scanf("%d", &stud);
    }
    if( stud >= 50){
        printf("student pass", stud); // pass the students if they meet the condition 
    }
    else{
        printf("failed", stud); // fails them if below condition 
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
