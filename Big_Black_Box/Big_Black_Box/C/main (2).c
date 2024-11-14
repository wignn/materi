/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tinggi;
    
    printf("tinggi badan: ");
    scanf("%d", &tinggi);
    
    if (tinggi<180){
        printf("tinggi %d bayar",tinggi);
    } else{
        printf("tinggi %d gratis",tinggi);
    }

    return 0;
}
