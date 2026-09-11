#include <stdio.h>
int main() {
    int n = 4;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) printf("%d", (i+j)%2==0 ? 1 : 0);
        printf("\n");
    }
    return 0;
}
