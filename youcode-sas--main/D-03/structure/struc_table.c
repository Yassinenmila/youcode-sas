#include <stdio.h>
struct etudiant {
    char nom[20];
    char prenom [20];
    int note [3];

};
int main(){
    int i=0;
    struct etudiant e1;
    printf("saisir votre nom :");
    scanf("%s",e1.nom);
    printf("saisir votre prenom :");
    scanf("%s",e1.prenom);
    for(i=0;i<3;i++){
        printf ("saisir la note %d :",i+1);
        scanf("%d",&e1.note[i]);
    }
    printf("votre nom : %s\n",e1.nom);
    printf("votre prenom : %s\n",e1.prenom);
    for(i=0;i<3;i++){
        printf ("votre note %d : %d",i+1,e1.note[i]);
    }

    return 0;
}