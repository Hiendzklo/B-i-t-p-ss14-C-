#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "hello world";
    int wordCount = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\0') {
            wordCount++;
        }
        i++;
    }
    if (i > 0 && str[i-1] != ' ') {
        wordCount++;
    }
    printf("So tu trong chuoi: %d\n", wordCount);
}

