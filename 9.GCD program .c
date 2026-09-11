#include <stdio.h>


int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    printf("GCD = %d\n", gcd(a, b));
    return 0;
}
