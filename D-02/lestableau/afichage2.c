#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    int tab[n];
    printf("saisir le nombre de case ;");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("saisir un nombre :");
        scanf("%d",&tab[i]);
    }
    for(i=0;i<n;i++){
        printf("%d,",tab[i]);
    }
    

    return 0;
}