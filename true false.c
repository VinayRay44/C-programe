#include <stdio.h>

int main(){
	
	int a,b;
	
	printf("enter a value of A:");
	scanf("%d",&a);
	
	printf("enter a value of B:");
	scanf("%d",&b);
	
	int max=(a>b)? a:b;
	printf("%d",max);
	
	
}
