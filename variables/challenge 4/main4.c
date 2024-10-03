#include <stdio.h>
#include <stdlib.h>

int main()
{
       float km_h,m_s;
       printf("la vitesse en kilometres par heure (km/h) : \n");
       scanf("%f",&km_h);
       m_s = km_h * 0.27778 ;
       printf("la transforme en mètres par seconde (m/s): %.2f",m_s);
    return 0;
}

