#include <stdio.h>
void hello(){
printf("Hello Unsika!\n");
}
int addNumber(int a, int b){
int c= a+b;
return c;
}
int main(){
// first
hello();
printf("%d + %d = %d", 1,2, addNumber(1,2)); printf("\n");
// second
hello(); printf("%d + %d = %d", 4,5, addNumber(4,5)); printf("\n");
}