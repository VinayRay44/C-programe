#include <stdio.h>
int main() {
int a[5], sum = 0;
int n = sizeof(a) / sizeof(a[0]);
for (int i = 0; i < n; i++) { 
scanf("%d", &a[i]);
sum += a[i];
}
printf("Elements: ");
for (int i = 0; i < n; i++)
printf("%d ", a[i]);
printf("\nSum = %d, Average = %.2f\n", sum, (float)sum / n);
return 0;
}
