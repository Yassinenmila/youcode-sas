#include <stdio.h>
#include <math.h>
int main (){
    float a,b,c,s;
    printf("saisir le premier nombre :");
    scanf("%f",&a);
    printf("saisir le deuxieme nombre :");
    scanf("%f",&b);
    printf("saisir le troixieme nombre:");
    scanf("%f",&c);
    s=pow((a*b*c), 1.0/3.0);
    printf("la moyenne = %.2f",s);
    return 0;
}