#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,s=1,i=0;
    int tab[n];
    printf("saisir le nombre de case :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("saisir un nombre :");
        scanf("%d",&tab[i]);
        s*=tab[i];
    }
    printf("total = %d",s);
    return 0;
}