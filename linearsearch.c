#include <stdio.h>
int main() {
int a[5] = {64, 25, 12, 22, 11};
int n = 5, key = 22, found = -1;

for (int i = 0; i < n; i++) {
if (a[i] == key) { found = i; break; }
}
if (found >= 0) printf("%d found at index %d\n", key, found);
else printf("%d not found\n", key);

for (int pass = 0; pass < n - 1; pass++) {
for (int j = 0; j < n - 1 - pass; j++) {
if (a[j] > a[j + 1]) {
int temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}
printf("Sorted: ");
for (int i = 0; i < n; i++) printf("%d ", a[i]);
printf("\n");
return 0;
}
