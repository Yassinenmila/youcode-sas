#include <stdio.h>

int reverse (int a){
    int rev=0;
    while(a!=0){
        rev=rev*10;
        rev=rev+a%10;
        a=a/10;
    }
    return rev;
}

int main(){
    int n;
    printf ("saisir un nombre :");
    scanf("%d",&n);
    printf("inverse de se nombre est = %d",reverse(n));
    return 0;
}