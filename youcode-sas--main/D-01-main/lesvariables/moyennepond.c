#include <stdio.h>
int main (){
    float a,b,c,s;
    printf("saisir le premier nombre :");
    scanf("%f",&a);
    printf("saisir le deuxieme nombre :");
    scanf("%f",&b);
    printf("saisir le troixieme nombre:");
    scanf("%f",&c);
    s=((a*2)+(b*3)+(c*5))/3;
    printf("la moyenne = %.2f",s);
    return 0;
}