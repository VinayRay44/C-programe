#include <stdio.h>
int fib(int n) { 
if (n == 0) return 0; 
if (n == 1) return 1;
return fib(n - 1) + fib(n - 2);
}
int sumDigits(int n) {
if (n == 0) return 0;
return (n % 10) + sumDigits(n / 10);
}
int gcd(int a, int b) { 
if (b == 0) return a; 
return gcd(b, a % b);
}
int power(int base, int exp) {
if (exp == 0) return 1;
return base * power(base, exp - 1);
}
int main() {
printf("Fibonacci series: ");
for (int i = 0; i < 8; i++)
printf("%d ", fib(i));
printf("\nsumDigits(4729) = %d\n", sumDigits(4729));
printf("gcd(48, 18) = %d\n", gcd(48, 18));
printf("power(2, 10) = %d\n", power(2, 10));
return 0;
}
