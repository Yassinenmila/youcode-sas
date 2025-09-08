#include <stdio.h>
struct personne {
     char nom[20];
     char prenom [20];
     int age;
};

int main(){
    struct personne p1;
    printf("saisir votre nom :");
    scanf("%s",p1.nom);
    printf("saisir votre orenom :");
    scanf("%s",p1.prenom);
    printf("saisir votre age :");
    scanf("%d",&p1.age);
    printf("votre nom : %s\n",p1.nom);
    printf("votre prenom : %s\n",p1.prenom);
    printf("votre age : %d\n",p1.age);
    return 0;
}