#include <stdio.h>

void(char dest[], char src[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
