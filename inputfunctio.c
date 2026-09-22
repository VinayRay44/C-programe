#include <stdio.h>
int main() {
int age;
float height;
char grade;
scanf("%d %f %c", &age, &height, &grade); 
printf("Age = %d, Height = %.1f, Grade = %c\n", age, height, grade);
putchar('O'); 
putchar('K');
putchar('\n');
puts("puts adds a newline automatically");
return 0;
}
