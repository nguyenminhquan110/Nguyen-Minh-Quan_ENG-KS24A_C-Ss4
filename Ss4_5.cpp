#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap so thu ba: ");
    scanf("%d", &num3);
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("So thu ba nam trong khoang giua so thu nhat và so thu hai.\n");
    } else {
        printf("So thu ba không nam trong khoang giua so thu nhat và so thu hai.\n");
    }
    return 0;
}

