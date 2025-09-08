#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct contact {
    char nom[50];
    char numero[30];
    char email[100];
};
void ajouter (struct contact c[],int n){
    
    int i=0;
    for(i=0;i<n;i++){
        printf("saisir le nom :");
        scanf("%49s",c[i].nom);
        printf("saisir le numero :");
        scanf("%29s",c[i].numero);
        printf("saisir le email :");
        scanf("%99s",c[i].email);
    }
  
}
void modifier(int n,char nom[30],struct contact c[]){
    int i=0,x=0;
    printf("entrer le nom du contact :");
    scanf("%s",nom);
    for(i=0;i<n;i++){
       if(strcmp(nom,c[i].nom)==0){
        printf("saisir le nouveau numero :");
        scanf("%29s",c[i].numero);
        printf("saisir le nouveau email :");
        scanf("%99s",c[i].email);
        x++;
       } 
    }
    if (x==0){
        printf("contact non trouver !");
    }
    else{
        printf("!!!!! contact modifier!!!!!!");
    }
}
void suprimer(int *n, char nom[30], struct contact c[]) {
    int i=0,x=0;
    printf("Entrer le nom du contact : ");
    scanf("%s", nom);

    for(i=0; i< *n; i++){
       if(strcmp(nom, c[i].nom) == 0){
            c[i] = c[*n - 1];
            (*n)--;
            printf("Contact supprimé !!\n");
            x=1;
            break;
       }
    }
    if(x==0){
        printf("Contact non trouvé !\n");
    }
}
void afficher (struct contact c[],int n){
    int i=0;
    for(i=0;i<n;i++){
       printf("nom :> %s || numero :> %s || adresse email :> %s\n",c[i].nom,c[i].numero,c[i].email);
    }
}
void recherche (int n,char nom[30],struct contact c[]){
    int i=0,x=0;
    printf("entrer le nom du contact :");
    scanf("%s",nom);
    for(i=0;i<n;i++){
       if(strcmp(nom,c[i].nom)==0){
        printf("contact trouver !!!\n");
        printf("nom :> %s || numero :> %s || adresse email :> %s\n",c[i].nom,c[i].numero,c[i].email);
        x++;
       } 
    }
    if (x==0){
        printf("contact non trouver !");
        system("pause");
    }
}

int main(){
    struct contact contacts[100];
    int n = 0;   
    int choice;
    char nom[30], q;

    while(1){
        printf("\n<<======== MENU PRINCIPAL ========>>\n");
        printf("1. Ajouter des Contacts\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        printf("6. Quitter\n");
        printf("Saisir votre choix : ");
        scanf("%d", &choice);
        system("cls");

        switch(choice){
            case 1:
            printf("saisir le nombre de contact :");
            scanf("%d",&n);
                ajouter(contacts,n);
                system("cls");
                break;
            case 2:
                modifier(n, nom, contacts);
                system("pause");
                system("cls");
                break;
            case 3:
                suprimer(&n, nom, contacts);
                system("pause");
                system("cls");
                break;
            case 4:
                afficher(contacts, n);
                system("pause");
                system("cls");
                break;
            case 5:
                recherche(n, nom, contacts);
                system("cls");
                break;
            case 6:
                printf("Êtes-vous sûr ? [y/n] ");
                scanf(" %c", &q);
                if(q == 'y' || q == 'Y') exit(0);
                break;
            default:
                printf("!!!!!! ERREUR DE SAISIE !!!!!!\n");
                system("pause");
                system("cls");
        }
    }
    return 0;
}