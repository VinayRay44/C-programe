#include <stdio.h>
int main() {
    int a = 0, b = 1, next, i;
    for (i = 0; i < 5; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}

