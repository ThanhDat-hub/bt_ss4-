#include <stdio.h>

int main() {
    int nam;
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        printf("nam %d la nãm nhuan.\n",nam);
    } else {
        printf("nam %d khong phai nam nhuan.\n",nam);
    }

    return 0;
}

