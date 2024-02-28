#include <stdio.h>
#include <stdlib.h>

/* EX6: C Program to Calculate Sum of Natural Numbers */

int main()
{
    int Num,count,sum = 0;
    printf("please Enter Natural Numbers: ");
    scanf("%d",&Num);

    for(count = 1 ; count <= Num  ; ++count){
        sum += count;
    }
        printf("Sum = %d",sum);

    return 0;
}
