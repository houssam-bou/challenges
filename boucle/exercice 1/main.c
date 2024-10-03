#include <stdio.h>
#include <stdlib.h>
int main() {

    int T[5],i ;


for (i=0;i<=4;i++){
    printf("entrer un nombre = ");
    scanf("%d", &T[i]);

   }

   for (i=0;i<=4;i++){
     printf("%d\n", T[i]);
   }

int x;
printf("entrer nombre pour recherche = ");
scanf("%d",&x);
printf("le nombre :");
/////////////////////////////


for (i=0;i<=5;i++){
  if (x==T[i]) {
      printf ("est exict ") ;

  }
    if (x<T[6])
    printf ("n`est pas exict");
break;
   }

/////////////////
    return 0;
}
