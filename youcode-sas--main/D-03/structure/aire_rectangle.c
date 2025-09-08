#include <stdio.h>
struct aire_rectangle{
    int longueur;
    int largeur;
};

int main(){
    struct aire_rectangle a1;
    printf("saisir la longueur :");
    scanf("%d",&a1.longueur);
    printf("saisir la largeur :");
    scanf("%d",&a1.largeur);
    printf("aire du rectangle = %d",a1.largeur*a1.longueur);
    return 0;
}