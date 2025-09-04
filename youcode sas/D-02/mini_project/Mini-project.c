#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    int max;
    printf("saisir combien de livre maximum :");
    scanf("%d",&max);
    system("cls");
    #define MAX 100
    char titre[MAX][100];
    char auteur[MAX][100];
    float prix[MAX];
    int quantite[MAX];
    int choice;
    while(1){
        printf("MENU PRINCIPAL\n");
        printf("1. ajouter un livre.\n");
        printf("2. afficher les livre disponible.\n");
        printf("3. Rechercher un livre par son titre.\n");
        printf("4. mettre a jour la quantite d'un livre.\n");
        printf("5. suprimer un livre du stock.\n");
        printf("6. afficher le nombre total des livre en stock.\n");
        printf("7. QUITTER .\n");
        printf("saisir votre choix :\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            for(i=0;i<max;i++){
                printf("saisir le titre du livre %d :\n",i);
                scanf("%s",titre[i]);
                printf("saisir l'auteur du livre %d :\n",i);
                scanf("%s",auteur[i]);
                printf("saisir le prix du livre %d :\n",i);
                scanf("%f",&prix[i]);
                printf("saisir la quantite du livre %d :\n",i);
                scanf("%d",&quantite[i]);
            }
            system("cls");
            break;
            case 2:
            	printf("\n format nÃƒâ€šÃ‚Â°= titre , auteur, prix , quntite\n");
            	for(i=0;i<max;i++){
                	printf("\n nÃƒâ€šÃ‚Â°%d= %s , %s , %f DH, %d. \n",i,titre[i],auteur[i],prix[i],quantite[i]);
            	}
            	system("pause");
            	system("cls");
            break;
            char c[100];
            
            case 3:{
			int x;
            	printf("saisir les element a rechercher :");
    			scanf("%s",c);
                x=0;
    			for(i=0;i<max;i++){
        			if (strcmp(titre[i],c)==0 ){
        				printf("Livre trouvÃ© : %s , %s , %.2f DH, %d exemplaires\n",
                   		titre[i], auteur[i], prix[i], quantite[i]);
                   		system("pause");
    			        system("cls");
           			x=1;
        			}
        			
    			}
    				if (x!=1){
        				printf("rien trouver");
        				break;
        				system("pause");
    			        system("cls");
    				}
    			system("pause");
    			system("cls");
				}
    		break;
			
            case 4:{
			int ind=0,q=0;
            	printf("quel est l'indice du livre que tu veux modifier :");
            	scanf("%d",&ind);
            	printf("la nouvelle quantiter :");
            	scanf("%d",&q);
            	quantite[ind]=q;
            	system("pause");
            	system("cls");
				}
            break;
            
            case 5:{
            	
			int sup=0;
            printf("saisir l'indice du livre que tu veux suprimer :");
            scanf("%d",&sup);
            if (sup<max && sup>=0){
				for(i=sup;i<max-1;i++){
                    strcpy(titre[i], titre[i+1]);
    				strcpy(auteur[i], auteur[i+1]);
    				prix[i] = prix[i+1];
    				quantite[i] = quantite[i+1];
				
				}
				max--; 
				printf("le livre a bien ete suprimer !!");
				system("pause");
			}
			else{
					printf("l'indice introuvable !!!");
					system("pause");
				}
			
			system("cls");
			}
            break;
            
            case 6:{

			    int som=0;
            	for(i=0;i<max;i++){
        			som+=quantite[i];
    			}
                printf("la somme total de quantite des livre  = %d",som);
                system("pause");
                system("cls");
            }
            break;
            char h;
            case 7:
            	exit(0);
            break;
        }

    }
    return 0;
}