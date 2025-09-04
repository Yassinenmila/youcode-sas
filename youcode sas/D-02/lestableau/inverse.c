#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i=0;
    printf("saisir un nombre de case =");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("saisir un nombre :");
        scanf("%d",&tab[i]);
    }
    printf("tableau normal:");
    for(i=0;i<n;i++){
        printf("%d",tab[i]);
    }
    printf("\n");
    printf("tableau inverse :");
    for(i=n-1;i>=0;i--){
        printf("%d",tab[i]);
    }
    return 0;
}