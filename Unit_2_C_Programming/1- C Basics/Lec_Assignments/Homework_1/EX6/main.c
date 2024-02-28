#include <stdio.h>
#include <stdlib.h>

//Write Source Code to Swap Two Numbers

int main()
{
    float a,b,temp;
    printf("please Enter value of a: ");
    scanf("%f",&a);
    printf("please Enter value of b: ");
    scanf("%f",&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a: %0.2f \n",a);
    printf("After swapping, value of b: %0.2f",b);
    return 0;
}
