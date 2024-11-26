#include <stdio.h>
int main() {
    int year, month, day;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang: ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("thang khong hop le");
    } else {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            day = 31;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            day = 30;
        } else {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                day = 29;
            } else {
                day = 28;
            }
        }
        printf("thang %d nam %d co %d ngay", month, year, day);
    }

    return 0;
}

