#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    printf("veuiller entrer la valleur de A: ");
    scanf("%d",&A);
    printf("veuiller entrer la valleur de B: ");
    scanf("%d",&B);
    if(A*B>0)
        printf("A et B ont le meme signe");
    else
        printf("A et B ont deux signe different");
    return 0;
}
