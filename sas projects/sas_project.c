#include <stdio.h>
#include <string.h>

typedef struct{
    int ID;
    char nom[50];
    char prenom[50];
    int maillot;
    char poste[30];
    int age ;
    int but ;
}players;
void ajoute(players player[]){
    int choice=0;
                printf("<========>Ajouter un joueur<========>\n");
                printf("1. Ajouter un nouveau joueur .\n");
                printf("2. Ajouter plusieur joueur en une seule operation .\n");
                printf("3. Retourner au Menu Principal .\n");
                printf("saisir votre choix : ");
                scanf("%d",&choice);
                switch(choice){
                    case 1:{
                        
                        break;
                    } 
                    case 2:{

                        break;
                    }      
                }
}

int main(){
    players player[100];
    int choix=0;

    while(1){
        system("cls");
        printf("<========>MENU PRINCIPAL<========>\n");
        printf("1. Ajouter un joueur .\n");
        printf("2. Afficher la liste de tous les joueurs .\n");
        printf("3. modifier un joueur .\n");
        printf("4. Supprimer un joueur .\n");
        printf("5. Recherche un joueur .\n");
        printf("6. statistiques .\n");
        printf("7. QUITTER .\n");
        printf("saisir votre choix : ");
        scanf("%d",&choix);
        switch(choix){
            case 1:{
                 
                system("pause");
                system("cls");
                break;
            }
            case 2:{

                system("pause");
                system("cls");
                break;
            }
            case 3:{

                system("pause");
                system("cls");
                break;
            }
            case 4:{

                system("pause");
                system("cls");
                break;
            }
            case 5:{

                system("pause");
                system("cls");
                break;
            }
            case 6:{
                
                system("pause");
                system("cls");
                break;
            }
            case 7:{
                
                system("pause");
                system("cls");
                break;
            }
            default:{
                printf("!!!!!!!!ERROR DE SAISIE!!!!!!!!");
                system("pause");
                system("cls");
            }
        }
    }
    return 0;
}