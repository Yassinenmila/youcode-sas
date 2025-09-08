#include <stdio.h>
#include <string.h>

int main (){
    char c[10];
    printf("saisir votre nom :");
    scanf("%s",c);
    char b;
    int d=0;
    int f=strlen(c)-1;
    while(d<f){
        b=c[d];
        c[d]=c[f];
        c[f]=b;
        d++;
        f--;
    }
    printf("%s",c);
    return 0;
}