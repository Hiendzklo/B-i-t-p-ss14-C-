#include <stdio.h>
#include <string.h>

void removeCharacter(char *str, char charToRemove) {
    int i, j = 0;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != charToRemove) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main() {
    char str[] = "hello world";
    char charToRemove;
    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &charToRemove);
    removeCharacter(str, charToRemove);
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", charToRemove, str);
}

