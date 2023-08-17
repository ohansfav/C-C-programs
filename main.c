#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    do{
        n/=10;
        ++count;
    }
    while(n ! = 0);
    printf("Number of digit is: %d", count);

    return 0;
}
