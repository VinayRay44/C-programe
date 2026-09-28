#include <stdio.h>
int main() {
int num = 10;
int *ptr = &num;
printf("Address of num: %p\n", (void *)ptr);
printf("Address of ptr: %p\n", (void *)&ptr);
return 0;
}
