#include <stdio.h>
#include <stdlib.h>

/* EX8: C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch ... case  */

int main()
{
    char o;
    printf("Enter operator either + or - or * or divide: ");
    scanf("%c",&o);
    float Num1,Num2;
    printf("Enter two operands: ");
    scanf("%f %f",&Num1,&Num2);
    switch (o){
    case '+':
        printf("%0.2f + %0.2f = %0.2f", Num1,Num2,Num1+Num2);
        break;
    case '-':
        printf("%0.2f - %0.2f = %0.2f", Num1,Num2,Num1-Num2);
        break;
    case '*':
        printf("%0.2f * %0.2f = %0.2f", Num1,Num2,Num1*Num2);
        break;
    case '/':
        printf("%0.2f / %0.2f = %0.2f", Num1,Num2,Num1/Num2);
        break;
    default:
        printf("Error!! operator is not correct");
        break;
    }
    return 0;
}
