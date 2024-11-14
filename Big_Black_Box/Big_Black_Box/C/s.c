#include <stdio.h>

int main (){
    float uang;
    int bulan;
    int jumlah;

    printf ("masukan jumlah uang: ");
    scanf("%f", &uang);

    printf ("masukan jumlah bulan");
    scanf("%d", &bulan);

    jumlah=(uang*bulan);
    printf("jumlah tabungan adalah:%d", jumlah);



return 0;
}