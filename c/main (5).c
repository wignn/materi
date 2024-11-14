/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nilai1;
    int nilai2;
    int temp;
    
    printf("masukan nilai 1:");
    scanf("%d", &nilai1);
    
    printf("masukan nilai 2:");
    scanf("%d", &nilai2);
    
    temp = nilai1;
    nilai1 = nilai2;
    nilai2 = temp;
    
    printf("Nilai sesudah ditukar\n");
    printf("nilai 1 : %d\n", nilai1);
    printf("nilai 2 : %d", nilai2);
    
    return 0;
}
