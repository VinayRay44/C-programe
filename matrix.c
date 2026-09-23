#include <stdio.h>
int main() {
int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
printf("Value at row 1, col 2: %d\n\n", matrix[1][2]);
for (int i = 0; i < 2; i++) { 
for (int j = 0; j < 3; j++) { 
printf("%3d", matrix[i][j]);
}
printf("\n");
}
return 0;
}
