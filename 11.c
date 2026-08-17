#include <stdio.h>

int main() {
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

   
    if (a > 0) {
        printf("%d is Positive.\n", a);
    } else if (a < 0) {
        printf("%d is Negative.\n", a);
    } else {
        printf("The number is Zero.\n", a);
    }

    return 0;
}

