#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float volume,pi=3.14,r;
    printf("r=");
    scanf("%f",&r);
    volume = (4/3)* pi * pow(r,3);
    printf("le volume= %.2f",volume);

    return 0;
}
