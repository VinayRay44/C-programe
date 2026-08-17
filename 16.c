#include <stdio.h>

int main() {
    char a; 
    printf("Enter an alphabet: ");
    scanf("%c", &a);

    
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
        a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        printf("%c is a Vowel.\n", a);
    } else {
        printf("%c is a Consonant.\n", a);
    }

    return 0;
}

