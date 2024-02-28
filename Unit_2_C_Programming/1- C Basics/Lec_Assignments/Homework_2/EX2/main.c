#include <stdio.h>
#include <stdlib.h>

/* EX2: C Program to Check Vowel or Consonant */

int main()
{
    char c,isLowerCase,isUpperCase;
    printf("please Enter sympol of n: ");
    scanf("%c",&c);
    isLowerCase = ((c=='a')||(c == 'e')||(c == 'i')||(c == 'o')||(c == 'u'));
    isUpperCase = ((c=='A')||(c == 'E')||(c == 'I')||(c == 'O')||(c == 'U'));
    if((isLowerCase || isUpperCase))
    {
        printf("%c is Vowel",c);
    }
    else
    {
        printf("%c is Consonant",c);
    }
    return 0;
}
