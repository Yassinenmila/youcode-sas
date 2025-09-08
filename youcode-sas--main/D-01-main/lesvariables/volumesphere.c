#include <stdio.h>
 int main (){
    float pi,r,s,r3;
    pi=3.14;
    printf("saisir le rayon de la sphere:");
    scanf("%f",&r);
    r3=r*r*r;
    s=(4.0/3.0)*pi*r3;
    printf("le volume de la sphere = %.2f",s);
    return 0;
 }