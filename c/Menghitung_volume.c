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
