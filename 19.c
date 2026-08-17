#include <stdio.h>

int main()
{
    int a, b, c, d, greatest;

    printf("Enter four numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
      scanf("%d",&c);
        scanf("%d",&d);
    greatest = a;

    if (b > greatest)
        greatest = b;

    if (c > greatest)
        greatest = c;

    if (d > greatest)
        greatest = d;

    printf("Greatest number = %d", greatest);

    return 0;
}
