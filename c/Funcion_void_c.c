#include <stdio.h>
void hello(){ printf("Hello Unsika!\n");
}
void addNumber(int a, int b){
int c= a+b; 
printf("%d + %d = %d", a, b, c); 
printf("\n");
}
int main(){
// first
hello(); 
addNumber(1,2);
// second
hello(); 
addNumber(4,5);
}