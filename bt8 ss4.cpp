#include <stdio.h>

int main() {
    float a, b, c;
    printf("canh a: ");
    scanf("%f", &a);
    printf("canh b: ");
    scanf("%f", &b);
    printf("canh c: ");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("la 3 canh tam giac.\n");
    } else {
        printf("khong phai 3 canh tam giac.\n");
    }

    return 0;
}

