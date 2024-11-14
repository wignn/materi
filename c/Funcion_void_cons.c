/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void kali(int a, int b){
    int c=a+b;
    int d=a-b;
    printf("\n hasil pertambahan %d", c);
    printf("\n hasil pertambahan %d", d);
}
int kembali(int a, int b){
    int c=a*b;
    int f=a/b;
    printf("\n hasil pertambahan %d", c);
    printf("\n hasil pertambahan %d", f);
}
int main () {
    kali(9,7);
    kembali(9,7);
    return 0;
    
}