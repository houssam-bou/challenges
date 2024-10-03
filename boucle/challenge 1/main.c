#include <stdio.h>

int main() {

   int n ,i;
   printf("entrer le nombre : ",n);
   scanf("%d", &n);

   for(i=0;i<10;i++)
   {
       printf("%d *  %d = %d \n",i,n,i*n);
   }

    return 0;
    }
