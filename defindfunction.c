#include <stdio.h>
void printMessage() { 
printf("Welcome VINAY\n");
}


int getYear() { 
return 2026;
}

void printSum(int a, int b) {
printf("Sum = %d\n", a + b);
}
int multiply(int a, int b) {
return a * b;
}
int main() {
printMessage();
printf("Year = %d\n", getYear());
printSum(5, 4);
printf("Product = %d\n", multiply(5, 4));
return 0;
}
