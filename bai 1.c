#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    printf("Nhap mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    size_t doDai = strlen(chuoi);
    if (chuoi[doDai - 1] == '\n') {
        chuoi[doDai - 1] = '\0';
        doDai--;
    }
    printf("Chuoi vua nhap: %s\n", chuoi);
    printf("Do dai cua chuoi: %zu\n", doDai);
}

