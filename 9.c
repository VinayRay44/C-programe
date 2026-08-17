#include <stdio.h>
int main() {
    int a,b;
    
	printf("Enter two numbers:");
	scanf("%d",&a);
    scanf("%d",&b);
    
    printf("before swaping:\n");
    printf("a =%d\n",a);
    printf("b =%d\n",b);
    
    
    a=a+b;
    
    b=a-b;
    
    a=a-b;
    
    
    printf("After swap: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}

