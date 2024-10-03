#include <stdio.h>
#include <stdlib.h>

int main()

{
char T[100][20];
int i ;

for (i=0;i<4;i++){
printf("entrer un nom =");

    scanf("%s",&T[i]);}


 for (i=0;i<4;i++)
 {
     printf("le nom :%s\n",&T[i]);

 }


    return 0;

}
