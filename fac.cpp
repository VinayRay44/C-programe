#include <stdio.h>
int sumArray(int arr[], int n) {
if (n == 0) return 0; 
return arr[n - 1] + sumArray(arr, n - 1);
}
void printReverse(char *s) {
if (*s == '\0') return; 
printReverse(s + 1);
putchar(*s);
}
int main() {
int a[5] = {3, 6, 9, 12, 15};
printf("Sum = %d\n", sumArray(a, 5));
printf("Reversed: ");
printReverse("recursion");
printf("\n");
return 0;
}
