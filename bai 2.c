#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello, world!";
    printf("Cac ky tu trong chuoi lan luot la:\n");
    for (int i = 0; i < strlen(chuoi); i++) {
        printf("%c ", chuoi[i]); 
    }
    printf("\n"); 
}

