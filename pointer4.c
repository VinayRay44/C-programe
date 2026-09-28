#include <stdio.h>
int main() {
int arr[5] = {1, 2, 3, 4, 5};
int *p = arr;
printf("sizeof(arr) = %zu bytes\n", sizeof(arr));
printf("sizeof(p) = %zu bytes\n", sizeof(p));
int sum = 0;
for (p = arr; p < arr + 5; p++) 
sum += *p;
printf("Sum = %d\n", sum);
return 0;
}
