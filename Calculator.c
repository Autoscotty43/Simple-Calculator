#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;
	
	// Input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &op);
	
	// Operation
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero!\n");
                return 1; // Exit with error
            }
		    break;
        default:
            printf("Error: Invalid operation!\n");
            return 1; // Exit with error
    }

    // Output
    printf("Result: %.2lf\n", result);

    return 0;
}
