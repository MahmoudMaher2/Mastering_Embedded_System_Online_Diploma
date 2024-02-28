#include <stdio.h>
#include <stdlib.h>

//Write Source Code to Swap Two Numbers without temp variable.

int main()
{
    float a,b;
    printf("please Enter value of a: ");
    scanf("%f",&a);
    printf("please Enter value of b: ");
    scanf("%f",&b);
    // a = 5  b = 10
    a = a + b;   // a = 15
    b = a - b;   // b = 15 - 10 = 5 == (original) a
    a = a - b;   // a = 15 - 5 = 10 == (original) b
    printf("After swapping, value of a: %0.2f \n",a);
    printf("After swapping, value of b: %0.2f",b);
    return 0;
}
