#include <stdio.h>

int main() {
    int a,b,c;

    
    printf("Enter first number a: ");
    scanf("%d", &a);
    
    printf("Enter second number b: ");
    scanf("%d",&b);
    
    printf("Enter third number c: ");
    scanf("%d",&c);
     

    
    if (a>b,a>c) {
        printf("%d The largest number :\n", a);
    } else if (b>a,b>c) {
        printf("%d The largest number :\n", b);
    } else {
        printf("%d the largest number is :\n",c);
    }

    return 0;
}

