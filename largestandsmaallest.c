#include <stdio.h>
int main() {
int a[6] = {45, 12, 89, 33, 7, 61};
int max = a[0], min = a[0];
for (int i = 1; i < 6; i++) {
if (a[i] > max) max = a[i];
if (a[i] < min) min = a[i];
}
printf("Max = %d, Min = %d\n", max, min);
return 0;
}
