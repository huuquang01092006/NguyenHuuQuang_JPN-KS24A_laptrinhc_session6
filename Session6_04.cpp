#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    float delta, x1, x2;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f và x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x = %.2f\n", x1);
    } else {
        printf("Phuong trinh vo nghiem\n");
    }
    return 0;
}

