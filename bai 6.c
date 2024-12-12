#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Luyen tap voi chuoi!";
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", count);
}

