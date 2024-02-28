#include <stdio.h>
#include <stdlib.h>

/* EX5: C Program to Check Whether a Character is an Alphabet or not  */

int main()
{
    char c;
    printf("please Enter Character: ");
    scanf("%c",&c);

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("%c is an Alphabet",c);
    }
    else{
        printf("%c is not an Alphabet",c);
    }
    return 0;
}
