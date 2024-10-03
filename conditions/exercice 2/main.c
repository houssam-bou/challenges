#include <stdio.h>
#include <stdlib.h>

int main()
{
    char X;
    printf("entrer le caractere:");
    scanf("%c",&X);
    if( X >=97 && X<=122){
        printf("%c est un caratere minuscule",X);
    }
    else {
        printf("%c est un caractere majuscule",X);
    }
    return 0;
}
