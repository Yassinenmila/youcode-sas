#include <stdio.h>
int main (){
    float km=0,yard;
    printf("saisir la distance en km :");
    scanf("%f",&km);
    yard=km*1093.61;
    printf("la distance en yards  = %.2f yards",yard);
    return 0;
}