#include <stdio.h>
#include <string.h>

void capitalizeWords(char *str) {
    int i;
    int len = strlen(str);
    if (len > 0 && str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 'a' + 'A';
    }
    for (i = 1; i < len; i++) {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}
int main() {
    char str[] = "hello world";
    capitalizeWords(str);
    printf("%s\n", str); 
}

