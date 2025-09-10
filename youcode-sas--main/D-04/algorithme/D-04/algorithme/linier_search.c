#include <stdio.h>

int main(){
    int n,i,r;
    int x=0;
    printf("saisir le nombre de case : ");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("saisir un nombre :");
        scanf("%d",&tab[i]);
    }
    printf("saisir le nombre que tu veux chercher :");
    scanf("%d",&r);
    for(i=0;i<n;i++){
        if(tab[i]==r){
            printf("la valeur %d se trouve dans l'indice %d .",tab[i],i);
            break;
            x++;
        }
    }
    if(x==0){
        printf("valeur non trouver !");
    }
    
    return 0;
}