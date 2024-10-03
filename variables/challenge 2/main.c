#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K,C;
    printf("la température en Celsius : \n");
    scanf("%f",&C);
    K = C + 273.15;
    printf("Kelvin is : %2f",K);
 return 0;
}
