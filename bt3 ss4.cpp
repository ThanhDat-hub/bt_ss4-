#include <stdio.h>

int main() {
    int songuyen;

    printf("hay nhap vao so nguyen: ");
    scanf("%d", &songuyen);
    if (songuyen % 3 == 0 && songuyen % 5 == 0) {
        printf("so %d chia het cho ca 3,5.\n ", songuyen);
    } else if (songuyen % 3 == 0) {
        printf("so %d chia het cho 3.\n", songuyen);
    } else if (songuyen % 5 == 0) {
        printf("so %d chia het cho 5.\n", songuyen);
    } else {
        printf("so %d khong chia het cho ca 3,5.\n", songuyen);
    }

    return 0;
}

