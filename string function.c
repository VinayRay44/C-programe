#include <stdio.h>
#include <string.h>
int main() {
char a[20] = "Hello ";
char b[] = "World";
char c[20];
printf("strlen(b) = %zu\n", strlen(b));
strcpy(c, a); 
strcat(c, b); 
printf("After strcpy + strcat: %s\n", c);
if (strcmp("apple", "apple") == 0) printf("\"apple\" equals \"apple\"\n");
if (strcmp("apple", "banana") < 0) printf("\"apple\" comes before \"banana\"\n");
char *p = strchr(c, 'W'); 
printf("'W' found at index %ld\n", (long)(p - c));
char *q = strstr(c, "lo W"); 
printf("strstr gives: %s\n", q);
return 0;
}
