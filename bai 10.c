#include <stdio.h>
#include <string.h>

void countCharacters(char *str) {
    int n = strlen(str);
    char characters[256] = {0}; 
    int counts[256] = {0}; 
    int uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        char current = str[i];
        int found = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (characters[j] == current) {
                counts[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            characters[uniqueCount] = current;
            counts[uniqueCount] = 1;
            uniqueCount++;
        }
    }
    for (int i = 0; i < uniqueCount; i++) {
        printf("%c: %d\n", characters[i], counts[i]);
    }
}

int main() {
    char str[] = "bcdac";
    countCharacters(str);
}

