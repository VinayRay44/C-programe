#include <stdio.h>
#include <ctype.h>
int main() {
char text[] = "Hello World 2024!";
int upper = 0, lower = 0, digit = 0, space = 0;
for (int i = 0; text[i] != '\0'; i++) {
if (isupper(text[i])) upper++;
else if (islower(text[i])) lower++;
else if (isdigit(text[i])) digit++;
else if (isspace(text[i])) space++;
}
printf("Upper=%d Lower=%d Digits=%d Spaces=%d\n", upper, lower, digit, space);
for (int i = 0; text[i] != '\0'; i++)
text[i] = toupper(text[i]); 
printf("%s\n", text);
return 0;
}
