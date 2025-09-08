#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m=0,i=0,c;
    int tab[n];
    printf("saisir le nombre de case :");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("saisir un nombre :");
        scanf("%d",&tab[i]);
    }
    c=tab[0];
    for(i=0;i<n;i++){
       if (tab[i]<c)
       {
        c=tab[i];
       }
    }
    printf("le maximum est = %d",c);
    return 0;
}