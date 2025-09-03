#include <stdio.h>
int main() {
    int n,i=1,cpt=1;
    printf("saisir un nombre :");
    scanf("%d",&n);
    while(cpt<=n){
        if(i%2==1){
         printf("%d,",i);
         cpt++;
        }
    i++;
    }
    return 0;
}