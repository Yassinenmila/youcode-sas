#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i=0,c,x;
    printf("saisir un nombre de case :");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("saisir un element :");
        scanf("%d",&tab[i]);
    }
    printf("saisir les element a rechercher :");
    scanf("%d",&c);
    x=0;
    for(i=0;i<n;i++){
        if (tab[i]==c ){
            x++;
        }
    }
    if (x==0){
        printf("rien trouver");
    }
    else {
        printf("element se trouve dans le tableau !!");
    }
    return 0;
}