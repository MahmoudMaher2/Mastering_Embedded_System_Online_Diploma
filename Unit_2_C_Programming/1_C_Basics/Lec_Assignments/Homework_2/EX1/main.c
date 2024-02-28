#include <stdio.h>
#include <stdlib.h>

/* EX1: Write C Program to Check Whether a Number is Even or Odd */

int main()
{
    int n;
    printf("please Enter value of n: ");
    scanf("%d",&n);

    if((n%2)==0)
    {
        printf("%d is even",n);
    }
    else
    {
        printf("%d is odd",n);
    }
    return 0;
}
