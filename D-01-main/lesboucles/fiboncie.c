#include <stdio.h>
int main() {
    int a=0,b=1,c,i=0,n;
    printf("saisir un nombre :");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d",a);
    }
    return 0;
}