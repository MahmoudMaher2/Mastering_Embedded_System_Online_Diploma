#include <stdio.h>
#include <stdlib.h>

/* EX3:C Program to Find the Largest Number Among Three Numbers  */

int main()
{
    float a,b,c;
    printf("please Enter value of a: ");
    scanf("%f",&a);
    printf("please Enter value of b: ");
    scanf("%f",&b);
    printf("please Enter value of c: ");
    scanf("%f",&c);

    if(a>=b && a>=c){
        printf("%0.2f the Largest Number",a);
    }
    else if(b>=a && b>=c){
        printf("%0.2f the Largest Number",b);
    }
    else
    {
        printf("%0.2f the Largest Number",c);
    }
    return 0;
}
