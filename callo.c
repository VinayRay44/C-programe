#include <stdio.h>
#include <stdlib.h>
int main() {
int *arr = (int *)calloc(3, sizeof(int)); 
if (arr == NULL) return 1;
printf("Fresh calloc memory: %d %d %d\n", arr[0], arr[1], arr[2]);
for (int i = 0; i < 3; i++)
arr[i] = (i + 1) * 10;
int *tmp = (int *)realloc(arr, 6 * sizeof(int));
if (tmp == NULL) { 
free(arr);
return 1;
}
arr = tmp;
for (int i = 3; i < 6; i++)
arr[i] = (i + 1) * 10;
printf("After realloc : ");
for (int i = 0; i < 6; i++)
printf("%d ", arr[i]);
printf("\n");
free(arr);
return 0;
}
