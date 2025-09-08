#include <stdio.h>
#include <stdlib.h>
 
struct point {
    int x;
    int y;
};
int main (){
    struct point p;
    int *a;
    int *b;
    printf("saisir la valeur x:");
    scanf("%d",&p.x);
    printf("saisir la valeur y:");
    scanf("%d",&p.y);
    a=&p.x;
    b=&p.y;
    printf("addresse %p affiche la valeur : %d\n", (void*)a, p.x);
    printf("addresse %p affiche la valeur : %d\n", (void*)b, p.y);
}
