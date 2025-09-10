#include <stdio.h>

int main(){
    int x,i,n;
    printf("saisir nombre de case :");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("saisir un nombre :");
        scanf("%d",&tab[i]);
    }
    
    return 0;
}