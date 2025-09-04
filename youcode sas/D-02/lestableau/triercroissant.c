#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i=0,c,j=0;
    printf("saisir le nombre de case :");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("saisir un nombre :");
        scanf("%d",&tab[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (tab[i]>tab[j]){
                c=tab[i];
                tab[i]=tab[j];
                tab[j]=c;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",tab[i]);
    }


    return 0;
}