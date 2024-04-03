#include <stdio.h>
int a(char *ptr) {
    int l = 0;
    char *n = ptr;
    char c;

    while (*n != '\0') {
        l++;
        n++;
    }
    n--;
    while (ptr < n) {
        c = *ptr;
        *ptr = *n;
        *n = c;
        ptr++;
        n--;
    }
}
int main() {
    char ptr[100];
    printf("Enter a string: ");
    scanf("%s\n", ptr);
    a(ptr);
    printf("Reversed string: %s\n", ptr);
    return 0;
}
