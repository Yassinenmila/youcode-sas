#include <stdio.h>
#include <stdlib.h>
 
struct livre{
    char titre [30];
    char auteur [30];
    int annee;
};

int main(){
    struct livre tab;
    int i;
    
    printf("saisir le titre :");
    scanf("%s",tab.titre);
    printf("saisir l'auteur :");
    scanf("%s",tab.auteur);
    printf("saisir l'année :");
    scanf("%d",&tab.annee);
    
    printf("le titre : %s",tab.titre);
    printf("l'auteur : %s",tab.auteur);
    printf("l'année : %d",tab.annee);

    return 0;
}