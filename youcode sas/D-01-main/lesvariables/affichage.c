#include <stdio.h>
#include <stdlib.h>

int main (){
    char nom[15];
    char prenom[15];
    int age;
    char sexe[15];
    char email[50];

    printf("saisir votre nom :");
    scanf("%s",nom);
    printf("saisir votre prenom :");
    scanf("%s",prenom);
    printf("saisir votre age :");
    scanf("%d",&age);
    printf("saisir votre sexe :");
    scanf("%s",sexe);
    printf("saisir votre email :");
    scanf("%s",email);
    printf("nom :%s\n",nom);
    printf("prenom :%s\n",prenom);
    printf("age :%d\n",age);
    printf("sexe :%s\n",sexe);
    printf("email :%s\n",email);


    return 0;
}
