#include <stdio.h>
int main() {
    int n, orig, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (orig = n; n > 0; n /= 10) 
        rev = rev * 10 + (n % 10);

    if (orig == rev) printf("%d is a palindrome.\n", orig);
    else printf("%d is not.\n", orig);
    return 0;
}

