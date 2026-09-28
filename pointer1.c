#include <stdio.h>
int main() {
int num = 10;
int *ptr = &num; 
printf("Value of num : %d\n", num);
printf("Value via *ptr : %d\n", *ptr);
printf("ptr == &num ? : %d\n", ptr == &num);
*ptr = 20;
printf("num after *ptr = 20: %d\n", num);
return 0;
}
