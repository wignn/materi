#include <stdio.h>

int main(){
    int nilai;
    
    printf("nilai: ");
    scanf("%d", &nilai);
    
    if (nilai<=100);{
        printf("nilai S");
    } else if(nilai>99 && nilai<80);{
        printf("nilai A");
    } else{
        printf("nilai F");
    }

    return 0;
}