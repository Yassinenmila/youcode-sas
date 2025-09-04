#include <stdio.h>
#include <math.h>
int main (){
    float x1,y1,z1,x2,y2,z2,s;
    printf("saisir la longeur du point 1 :");
    scanf("%f",&x1);
    printf("saisir la largeur du point 1 :");
    scanf("%f",&y1);
    printf("saisir la hauteur du point 1 :");
    scanf("%f",&z1);
    printf("saisir la longeur du point 2 :");
    scanf("%f",&x2);
    printf("saisir la largeur du point 2 :");
    scanf("%f",&y2);
    printf("saisir la hauteur du point 2 :");
    scanf("%f",&z2);
    s=sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1));
    
    printf("la distance  = %.2f",s);
    return 0;
}