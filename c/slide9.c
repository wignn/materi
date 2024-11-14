// #include<stdio.h>
// int main(){
//     int TinggiSegitiga=5;
//     int a,b,c;
//     for(a=1; a<=TinggiSegitiga; a++){
//         for(c=1; c<=TinggiSegitiga-a;c++){
//                 printf (" ");
//         }
//         for  (b=1; b<=a; b++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
 
// int main()
// {
//   int i=5;
//   do {
//     printf("%d\n ", i);
//     i+=5;
//   }
//   while (i <= 50);
//   return 0;
// }
#include <stdio.h>

int main() {
    float r, t, volume;
    int npm;
    char nama[50];  
    char selection;

    do {
        printf("Masukkan namamu: ");
        scanf("%s", nama);
        printf("Masukkan npm: ");
        scanf("%d", &npm);
        printf("Masukkan r: ");
        scanf("%f", &r);
        printf("Masukkan t: ");
        scanf("%f", &t);

        volume = (3.14 * r * r * t) / 3;

        printf("Nama %s \n", nama); 
        printf("npm %d \n", npm);   
        printf("volume %f \n", volume);

        printf("Apakah anda ingin mengulang? (y/n): ");
        scanf(" %s", &selection);

    } while (selection == 'y' || selection == 'Y');

    return 0;
}
