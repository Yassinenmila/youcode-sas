#include <stdio.h>

int main(){
    int n,i=0,c,j=0;
    printf("combien de nombre :");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("saisir un nombre :");
        scanf("%d",&tab[i]);
    }
    printf("affichage avant le trie : ");
    for(i=0;i<n;i++){
        printf("%d",tab[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(tab[j]>tab[j+1]){
                c=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=c;
            }   
        }
    }
    printf("\n apres le tri : ");
    for(i=0;i<n;i++){
        printf("%d",tab[i]);
    }
    return 0;
}