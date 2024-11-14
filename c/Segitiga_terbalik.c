#include <stdio.h>

int main() {
 int tinggi, kosong, bintang, i;
 tinggi = 5;
 
 for(i=1;i<=5;i++){
     for(kosong=1;kosong<i;kosong++){
         printf(" ");
     }
     for(bintang=0;bintang<=tinggi-i;bintang++){
         printf("* ");
     }
     printf("\n");
 }
}


