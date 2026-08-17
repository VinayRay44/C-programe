#include <stdio.h>

int main(){
	 int a,b,c;
	 printf("enter value of A:");
	 scanf("%d",&a);
	 
	 printf("enter value of B:");
	 scanf("%d",&b);
	
	c=a,a=b,b=c;
	
	 printf("%d\n",a);
	 printf("%d\n",b);
	
	return 0;
	
	
}
