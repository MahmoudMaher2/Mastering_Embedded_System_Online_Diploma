#include <stdio.h>
#include <stdlib.h>

/* EX4: C Program to Check Whether a Number is Positive or Negative */

int main()
{
    float x;
    printf("please Enter Number: ");
    scanf("%f",&x);

    if(x == 0){
        printf("You Entered Zero",x);
    }
    else if(x > 0){
        printf("%0.2f the is Positive",x);
    }
    else
    {
        printf("%0.2f is Negative",x);
    }
    return 0;
}
