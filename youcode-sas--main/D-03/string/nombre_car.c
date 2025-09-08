#include <stdio.h>
 int main(){
    char c[10];
    int i=0,cpt=0;
    printf("saisir un mots :");
    scanf("%s",c);
    while(c[i]!='\0'){
        cpt++;
        i++;
    }
    printf("nombre de caractere = %d",cpt);
    return 0;
 }