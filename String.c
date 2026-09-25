#include <stdio.h>
#include <string.h>
int main() {
char s1[] = "Hello"; 
char s2[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
char s3[20] = "Hello"; /* extra space is fine */
printf("s1 = %s, sizeof = %zu, strlen = %zu\n", s1, sizeof(s1), strlen(s1));
printf("s2 = %s, sizeof = %zu, strlen = %zu\n", s2, sizeof(s2), strlen(s2));
printf("s3 = %s, sizeof = %zu, strlen = %zu\n", s3, sizeof(s3), strlen(s3));
return 0;
}
