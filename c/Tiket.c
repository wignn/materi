#include<stdio.h>
int main(){
    int umur, tinggi;
    char selection='y';

    while(selection=='y'){
        printf("insert your age: ");
        scanf("%d",&umur);

        printf("insert your height: ");
        scanf("%d",&tinggi);

        if(umur>=4 || tinggi>=90){
            printf("You have to pay full price");
        } else{
            printf("You don't have to pay full price");
        }

        printf("\ndo you want to repeat? (y/n)");
        scanf(" %c", &selection);

    } 

    printf("thank you");

}