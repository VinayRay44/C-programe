#include <stdio.h>

int main() {
    int a,b;

    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    
    if (a > b) {
        printf("The greater number is:", a);
    } else if (b > a) {
        printf("The greater number is:", b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}

