/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nilai;
    
    printf("masukan nilai;");
    scanf("%d", &nilai);
    
    if(nilai>=90 && nilai <= 100){
        printf("nilai kamu S");
    } else if(nilai<90 && nilai>=80){
        printf("nilai kamu A");
    } else if(nilai<80 && nilai>=70){
        printf("nilai kamu B");
    } else if(nilai<70 && nilai>=60){
        printf("nilai kamu C");
    } else if(nilai<60){
        printf("dongo");
    } else{
        printf("Cerdas!");
    }
    
    return 0;
}
