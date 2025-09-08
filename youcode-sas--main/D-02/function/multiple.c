#include <stdio.h>
void multip (){
    int a,b,s=0;
    printf("saisir un nombre :");
    scanf("%d",&a);
    printf("saisir un nombre :");
    scanf("%d",&b);
    s=a*b;
    printf("multiple  = %d",s);
}
int main (){
    multip();
    return 0;
}