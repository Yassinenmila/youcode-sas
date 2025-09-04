#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0,n;
    printf("saisir le nombre de case :");
    scanf("%d",&n);
    int tab[n];
    int tab2[n];
     for(i=0;i<n;i++){
        printf("saisir un nombre :");
        scanf("%d",&tab[i]);
    }
    for(i=0;i<n;i++){
        tab2[i]=tab[i];
    }
    printf("tableau 1 =");
     for(i=0;i<n;i++){
        printf("%d\n",tab[i]);
    }
    printf("tableau 2 =");
     for(i=0;i<n;i++){
        printf("%d\n",tab2[i]);
    }
    return 0;
}