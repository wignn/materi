#include <stdio.h>

int main()
{
    float berat;
    float tinggi;
    float hasil;

    printf("masukan berat dalam kg: ");
    scanf("%f", &berat);

    printf("masukan tinggi dalam cm: ");
    scanf("%f", &tinggi);
    
    hasil = berat / ((tinggi / 100) * (tinggi / 100));
    printf("berat kamu: ");
    if (hasil > 25)
        
    {
        printf("berlebih ");
    }
    else if (hasil > 18 && hasil <=25)
    {
        printf("ideal");
    }
    else
    {
        printf("kurang");
    }

    return 0;
}