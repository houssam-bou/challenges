#include <stdio.h>
#include <stdlib.h>

int main()
{
    float surface,longueur ,largeur ;
    printf("longeur =");
    scanf("%f",&longueur);
    printf("largeur =");
    scanf("%f",&largeur);
    surface=longueur*largeur;
    printf("la surface est = %2.f",surface);
    return 0;
}
