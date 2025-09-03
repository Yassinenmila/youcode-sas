#include <stdio.h>
int main() {
    int n,cpt=0;
    printf("saisir un nombre :");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        cpt++;
    }
    printf("%d",cpt);
     return 0;
}