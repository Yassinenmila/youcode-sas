#include <stdio.h>
int main (){
    float k=0,c;
    printf("saisir la temperature en celsius:");
    scanf("%f",&c);
    k=c+273.15;
    printf("la temperature en kelvin = %.2f k°",k);
    return 0;
}