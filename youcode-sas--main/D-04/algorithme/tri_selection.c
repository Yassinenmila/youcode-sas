#include <stdio.h>

struct{
    char nom[20];
    char prenom[20];
    float notes[3];
}typedef Etudiant ;

void getelmt (Etudiant e[], int i){
    printf("le nom : %s",e[i].nom);
    printf("le prenom : %s",e[i].prenom);
    for (int j=0; j<3; j++) {
        printf("note : %f",e[i].notes[j]);
    }
    
}

int main(){
    int ind;
    Etudiant e[3];
    for (int i=0; i<3; i++) {
        printf("entrez le nom : ");
        scanf("%s",e[i].nom);
        printf("entrez le nom : ");
        scanf("%s",e[i].prenom);

        for (int j=0; j<3; j++) {
            printf(" note[%d] :",j);
            scanf("%f",&e[i].notes[j]);
        }
    }
    printf("indice = ");
    scanf("%d",&ind);
    getelmt(e,ind);
    return 0;
}