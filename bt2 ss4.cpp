#include <stdio.h>

int main() {
    int songuyen;
    printf("hay nhap vao so nguyen: ");
    scanf("%d", &songuyen);
    if (songuyen % 2==0) {
        printf("so %d là ss chan.\n", songuyen);
    } else {
        printf("so %d la so le.\n", songuyen);
    }

    return 0;
}

