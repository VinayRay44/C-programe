#include <stdio.h>
int main() {
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=11; j++) {
            if(((i+j)%4==0) || (i==2 && j%4==0)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
