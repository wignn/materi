// #include <stdio.h>

// int main() {
//  int tinggi, kosong, bintang, i;
//  tinggi = 5;
 
//  for(i=1;i<=5;i++){
//      for(kosong=1;kosong<i;kosong++){
//          printf(" ");
//      }
       
//         printf(" ");
//      for(bintang=0;bintang<=tinggi-i; bintang+){
//          printf("- ");
//      }

//        for(kosong=1;kosong<=1;kosong++){
//          printf("Nama:");
//      }
//      printf("\n");
//  }
// }

#include <stdio.h>

int main() {
    int i, j;

    printf("Output of Nested Loop in C:\n");

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}