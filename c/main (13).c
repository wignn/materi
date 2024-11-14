#include <stdio.h>
int main() { 
    int idBarang=1; 
    int harga; char size='m'; 
    char merk[4];
if(idBarang=1 && (size=='m' || size=='M')){ 
    strcpy(merk, "ABCD"); 
    harga=200000;
}
else if (idBarang==1 && (size!='m' || size!='M')){ 
    strcpy(merk, "ABCD"); 
    harga=250000;
} else{ 
    strcpy(merk, "XYZ"); 
    harga=100;
}
printf("id barang %d \n", idBarang); 
printf("merk %s \n", merk); 
printf("harga %d \n", harga);
return 0;
}