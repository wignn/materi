#include <stdio.h>

void perkalian(int a, int b){
    int c =a*b;
    printf(" %d x %d = %d", a,b,c);
}

int main(){
    int n1,n2;
    char selection;
    do{
        printf("masukkan nilai 1: ");
        scanf("%d", &n1);
        printf("masukkan nilai 2: ");
        scanf("%d", &n2);

    perkalian(n1,n2);

    printf("\napakah anda ingin mengulan?");
    scanf("%s", selection);
    } while(selection=='y'|| selection=='Y');
   
   return 0;
}