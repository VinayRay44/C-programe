#include <stdio.h>

int main()
{
    int a, b, greater;

    printf("Enter two numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    greater = (a > b) ? a : b;

    printf("Greater number = %d", greater);

    return 0;
}
