#include <stdio.h>
#include <stdlib.h>

int main() {
   int x=0;
   int i=0;

   printf("entrer le nombre =");
   scanf("%d",&x);
 while(x!=0)
 {
     i= i* 10 + x % 10;
     x /=10;


 }
 printf("%d",i);

    return 0;
}
