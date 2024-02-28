#include <stdio.h>
#include <stdlib.h>

/* EX7: C Program to Find Factorial of a Number */

int main()
{
    signed int Num , count ,factorial = 1;
    printf("please Enter Natural Numbers: ");
    scanf("%i",&Num);

    if (Num < 0){
        printf("Error!!! Factorial of negative number doesn't exist. ");
    }
    else{
        for(count = 1 ; count <= Num  ; ++count){
            factorial *= count;
        }
    }
    printf("Factorial = %i",factorial);

    return 0;
}
