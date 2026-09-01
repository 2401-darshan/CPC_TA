#include <stdio.h>

int main() {
    float a, b, result;
    int choice;
	
	printf("Enter two numbers a and b: ");
    scanf("%f %f", &a, &b);
    
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result = %f\n", result);
            break;
            
        case 2:
            result = a - b;
            printf("Result = %f\n", result);
            break;
            
        case 3:
            result = a * b;
            printf("Result = %f\n", result);
            break;
            
        case 4:
            if (b != 0) {
                result = a / b;
                printf("Result = %f\n", result);
            } 
			else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Invalid choice! Select between 1 and 4.\n");
            break;
    }

    return 0;
}
