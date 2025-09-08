#include <stdio.h>
#include <string.h>

int main(){
    char c[100];
    char l;
    int y,i,cpt=0;
    printf ("saisir un mots :");
    scanf("%s",c);
    printf("saisir une lettre :");
    scanf(" %c",&l);
    for(i=0;i<strlen(c);i++){
        if(c[i]==l){
            cpt++;
        }
    }
    if(cpt==0){
        printf("aucune resultat !!");
    }
    else {
        printf("nombre de (%c) = %d",l,cpt);
    }
    return 0;
}