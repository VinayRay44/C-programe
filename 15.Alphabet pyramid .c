#include <stdio.h>

int main() {
    int n = 4;
    for(int i = 1; i <= n; i++) {
        
        for(int k = 1; k <= i; k++) {
            printf("%c", 'A' + k - 1);
        }
        printf("\n");
    }
    return 0;
}
