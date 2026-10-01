#include <stdio.h>
#include <stdlib.h>
int main() {
int rows = 3, cols = 4;
int **m = (int **)malloc(rows * sizeof(int *)); 
for (int i = 0; i < rows; i++)
m[i] = (int *)malloc(cols * sizeof(int));
for (int i = 0; i < rows; i++)
for (int j = 0; j < cols; j++)
m[i][j] = (i + 1) * (j + 1); 
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++)
printf("%3d", m[i][j]);
printf("\n");
}
for (int i = 0; i < rows; i++) 
free(m[i]);
free(m); 
return 0;
}
