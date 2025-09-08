#include <stdio.h>
#include <string.h>

int main(){
    char c1[10];
    char c2[10];
    printf ("saisir un mots :");
    scanf("%s",c1);
    printf ("saisir un mots :");
    scanf("%s",c2);
    if(strcmp(c1,c2)==0){
        printf("les deux mots sans les meme");
    }
    else {
        printf("il ne sont pas les meme  ");
    }
    return 0;
}