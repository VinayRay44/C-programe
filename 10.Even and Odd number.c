#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Even numbers:\n");
    for (int i = 1; i <= n; i++) if (i % 2 == 0) printf("%d ", i);

    printf("\nOdd numbers:\n");
    for (int i = 1; i <= n; i++) if (i % 2 != 0) printf("%d ", i);

    printf("\n");
    return 0;
}
