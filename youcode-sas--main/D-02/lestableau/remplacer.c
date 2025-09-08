#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i=0,c,r,x;
    printf("saisir le nombre de case :");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("saisir un nombre :");
        scanf("%d",&tab[i]);
    }
    printf("entrer l'element a remplacer :");
    scanf("%d",&c);
    
    for(i=0;i<n;i++){
        if(tab[i]==c){
            x=i;
            break;
        }
    }
    printf("remplacer par :");
    scanf("%d",&r);
    tab[x]=r;
    printf("le nouveaux :\n");
    for(i=0;i<n;i++){
        printf("%d",tab[i]);
    }
    return 0;
}