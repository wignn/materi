//Soal Uncounted Loop Tiket 
//Do-While
/*int main(){
    int height;
    int age;
    char repeat;

    do{
        printf("Input your body height  :");
        scanf("%d", &height);
        printf("Input your age          :");
        scanf("%d", &age);
    
        if (height >= 90 || age >= 4){
            printf("you need to pay the ticket");
        }
        else{
            printf("you dont need to pay the ticket");
        }

        printf("\ndo you want to repeat (y/n)?");
        scanf(" %c", &repeat);
    }
    while(repeat == 'y');
    printf("EXIT");
    return 0;
}*/

//While
/*int main(){
    int height;
    int age;
    char repeat='y';

     while(repeat == 'y'){
        printf("Input your body height  :");
        scanf("%d", &height);
        printf("Input your age          :");
        scanf("%d", &age);
    
        if (height >= 90 || age >= 4){
            printf("you need to pay the ticket");
        }
        else{
            printf("you dont need to pay the ticket");
        }

        printf("\ndo you want to repeat (y/n)?");
        scanf(" %c", &repeat);
    }
    printf("EXIT");
    return 0;
}*/