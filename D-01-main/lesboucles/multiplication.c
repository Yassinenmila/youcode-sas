#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,c,i=1;
    printf("saisir un nombre :");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        c=n*i;
        printf(" %d x %d = %d\n",n,i,c);
    }
    return 0;
}
