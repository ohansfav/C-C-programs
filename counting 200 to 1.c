#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nat_no = 200;
    int i = 0;

    //learning whole statement 
    while (i<200){
    printf("the next number is: %d\n", nat_no);
    nat_no = nat_no - 1;
    i++;
    }

    return 0;
}
