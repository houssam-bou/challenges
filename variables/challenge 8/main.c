#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,la_moyenne_geometrique;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    la_moyenne_geometrique = pow((a*b*c),1.3);
    printf("%f",la_moyenne_geometrique);


    return 0;
}
