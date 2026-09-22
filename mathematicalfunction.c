#include <stdio.h>
#include <math.h>
int main() {
double base = 2.0, exponent = 3.0;
printf("pow(2, 3) = %.2f\n", pow(base, exponent));
printf("sqrt(16) = %.2f\n", sqrt(16.0));
printf("ceil(4.1) = %.2f\n", ceil(4.1));
printf("floor(4.9) = %.2f\n", floor(4.9));
printf("fabs(-7.5) = %.2f\n", fabs(-7.5));
printf("fmod(10, 3) = %.2f\n", fmod(10.0, 3.0));
printf("log10(1000) = %.2f\n", log10(1000.0));
return 0;
}
