#include <stdio.h>

void plus(int num1, int num2){
    printf("Result: %d\n", num1 + num2);
}

void minus(int num1, int num2){
    printf("Result: %d\n", num1 - num2);
}
void multipy(int num1, int num2){
    printf("Result: %d\n", num1 * num2);
}
void divide(int num1, int num2){
    if(num2 != 0){
                printf("Result: %.2f\n", (float)num1 / num2);
            }
            else
                printf("Error! Division by zero is not allowed.\n");
    }

int main() {
    int num1, num2;
    char operation;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation); // space before %c to skip any whitespace characters
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(operation) {
        case '+':
            plus(num1, num2);
            break;
        case '-':
            minus(num1, num2);
            break;
        case '*':
            multipy(num1, num2);
            break;
        case '/':
            
        default:
            printf("Invalid operation!\n");
    }

    return 0;
}