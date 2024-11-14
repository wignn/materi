/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    float alas;
    float tinggi;
    float luas;
    
    printf("luas: ");
    scanf("%f", &tinggi);

    printf("tinggi: ");
    scanf("%f", &alas);
    
   luas=(alas*tinggi)/2;
   printf("luasnya adalah:%f" ,luas);

    return 0;
}
