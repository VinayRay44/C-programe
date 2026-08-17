#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;
    
    printf("1. Addition");
    printf("2. Subtraction");
    printf("3. Multiplication");
    printf("4. Division");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f",&a);
    scanf("%f",&b);
    switch(choice)
    {
        case 1:
            result = a + b;
            printf("Result = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f", result);
            break;

        case 4:
            if(b != 0)
                result = a / b;
            else
            {
                printf("Division by zero is not possible.");
                return 0;
            }
            printf("Result = %.2f", result);
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
