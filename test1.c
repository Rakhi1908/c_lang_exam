#include <stdio.h>
int main() {
    char n;
    printf("Enter the vowel or consonant: ");
    scanf("%c", &n);

    switch(n) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", n);
            break;
        default:
            printf("%c is a consonant.\n", n);
    }
    return 0;
}
