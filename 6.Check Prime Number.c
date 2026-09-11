#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; n % i!= 0; i++);
    
    if (i == n) 
	printf("%d is a Prime number\n", n);
    else printf("%d is not a Prime number\n", n);

    return 0;
}

