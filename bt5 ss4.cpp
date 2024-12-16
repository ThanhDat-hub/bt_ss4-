#include <stdio.h>

int main() {
    int a, b, c;
    printf("so thu nhat: ");
    scanf("%d", &a);
    printf("so thu hai: ");
    scanf("%d", &b);
    printf("so thu ba: ");
    scanf("%d", &c);
    if ((c<b && c>a) || (c<a&& c>b)) {
        printf("so thu ba nam trong khoang giua so thu nhat va so thu hai.\n", c, a, b);
    } else {
        printf("so thu ba khong nam trong khoang giua so thu nhat va so thu hai.\n", c, a, b);
    }

    return 0;
}

