#include <stdio.h>
int main() {
    int n,s=1,p,i;
    printf("saisir un nombre :");
    scanf("%d",&n);
    printf("la puissance :");
    scanf("%d",&p);
    for(i = 1; i <= p; i++) {
            s*=n;
        }
    printf("%d",s);
    return 0;
}