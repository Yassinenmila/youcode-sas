#include <stdio.h>

void somme (){
    int a,b,s=0;
    printf("saisir un nombre :");
    scanf("%d",&a);
    printf("saisir un nombre :");
    scanf("%d",&b);
    s=a+b;
    printf("somme = %d",s);
}
int main (){
    sommes();
    return 0;
}