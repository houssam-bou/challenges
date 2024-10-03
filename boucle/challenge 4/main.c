#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("entrer un nombre =");
    scanf("%d",&n);
    if ( n%2!= 0){
       for (int i=0;i<10;i++)

        if (i%2!= 0)
        printf("%d \n",i);
    }
else {
    printf("erreur");
    }
    return 0;
}
