#include <stdio.h>
int main() {
int arr[4] = {10, 20, 30, 40};
int *p = arr; 
for (int i = 0; i < 4; i++)
printf("*(p + %d) = %d\n", i, *(p + i));
p++; 
printf("After p++, *p = %d\n", *p);
p = p + 2;
printf("*p = %d\n", *p);
printf("Elements between arr and p : %td\n", p - arr);
printf("Bytes between arr and p : %td\n", (char *)p - (char *)arr);
return 0;
}
