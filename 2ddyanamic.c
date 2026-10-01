#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
char *src = "Dynamic memory";
char *extra = " in C";
char *text = (char *)malloc(strlen(src) + strlen(extra) + 1); 
if (text == NULL) return 1;
strcpy(text, src);
strcat(text, extra);
printf("%s (length %zu)\n", text, strlen(text));
free(text);
return 0;
}
