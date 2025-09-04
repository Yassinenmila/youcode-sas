#include <stdio.h>
int main (){
    int c;
    printf("saisir la temperature de l'eau:");
    scanf("%f",&c);
    if(c<0){
        printf("solide");
    }
    else if(c>=0 && c<100){
        printf("liquide");
    }
    else {
        printf("gaz");
    }
    return 0;
}