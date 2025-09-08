#include <stdio.h>
int main (){
    float kmh=0,ms;
    printf("saisir la vitesse en km/h:");
    scanf("%f",&kmh);
    ms=kmh*0.27778;
    printf("la vitesse en m/s = %f m/s",ms);
    return 0;
}