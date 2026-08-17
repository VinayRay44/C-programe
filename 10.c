#include <stdio.h>

int main() {
    
    int a = 15;
    double b = 2.5;
    double result = a * b;   

    
    double target = 45.75;
    int casted_int = (int)target;   

    printf("Implicit: %f\n", result);
    printf("Explicit: %d\n", casted_int);
    return 0;
}


