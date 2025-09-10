#include <stdio.h>

int main(){
    int n,i=0,j=0,c;
    printf("combien de case dans le tableau : ");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("saisir un nombre :");
        scanf("%d",&tab[i]);
    }
    printf("tableau normal = ");
    for(i=0;i<n;i++){
        printf("%d",tab[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(tab[j]>tab[j+1]){
                c=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=c;
            }
        }
    }
    printf("le tableau trier =");
     for(i=0;i<n;i++){
        printf("%d",tab[i]);
    }

    return 0;
}