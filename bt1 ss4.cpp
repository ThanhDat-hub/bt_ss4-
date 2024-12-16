#include <stdio.h>

int main() {
    int songuyen;
    printf("hay nhap so nguyen: ");
    scanf("%d", &songuyen);
    if (songuyen > 0) {
        printf("so duong");
    } else if (songuyen < 0) {
        printf("so am");
    } else {
        printf("so 0\n");
    }

    return 0;
}

