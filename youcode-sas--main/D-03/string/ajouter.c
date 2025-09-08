#include <stdio.h>
#include <string.h>
 int main (){
    char c1[10];
    char c2[10];
     printf("saisir votre prenom :");
     scanf("%s",c1);
     printf("saisir votre nom :");
     scanf("%s",c2);
     strcat(c1,c2);
     printf("bonjour , %s",c1);
    return 0;
 }