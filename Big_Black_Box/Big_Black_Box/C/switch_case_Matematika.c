#include <stdio.h>

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
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result: %.2f\n", (float)num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operation!\n");
    }

    return 0;
}