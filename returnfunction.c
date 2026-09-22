#include <stdio.h>
int isPositive(int n) {
if (n > 0)
return 1; 
return 0;
}
void greet(int hour) {
if (hour < 12) {
printf("Good morning\n");
return; 
}
printf("Good day\n");
}
int main() {
printf("isPositive(5) = %d\n", isPositive(5));
printf("isPositive(-2) = %d\n", isPositive(-2));
greet(9);
greet(15);
return 0;
}
