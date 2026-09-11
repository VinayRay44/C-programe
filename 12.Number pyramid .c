#include <stdio.h>

int main() {
    int n = 4;
    for(int i = 1; i <= n; i++) {
        // k की वैल्यू प्रिंट करने से हर बार गिनती 1 से शुरू होगी
        for(int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
