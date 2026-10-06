#include <stdio.h>
#include <math.h>

// Hàm Bài 2: Tính học lực sinh viên
void tinhHocLuc() {
    float diem;
    printf("\n--- CHUONG TRINH TINH HOC LUC SINH VIEN ---\n");
    printf("Nhap diem cua sinh vien (0 - 10): ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le! Vui long nhap trong khoang tu 0 den 10.\n");
    } else if (diem >= 9.0) {
        printf("Hoc luc: Xuat sac\n");
    } else if (diem >= 8.0) {
        printf("Hoc luc: Gioi\n");
    } else if (diem >= 6.5) {
        printf("Hoc luc: Kha\n");
    } else if (diem >= 5.0) {
        printf("Hoc luc: Trung binh\n");
    } else if (diem >= 3.5) {
        printf("Hoc luc: Yeu\n");
    } else {
        printf("Hoc luc: Kem\n");
    }
}

// Hàm Bài 3: Giải phương trình bậc hai (ax^2 + bx + c = 0)
void giaiPTBacHai() {
    float a, b, c;
    printf("\n--- CHUONG TRINH GIAI PHUONG TRINH BAC HAI ---\n");
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    if (a == 0) {
        // Phuong trinh tro thanh bx + c = 0
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh bac nhat co nghiem x = %.2f\n", -c / b);
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x1 = x2 = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}

// Hàm Bài 4: Tính tiền điện tiêu thụ
void tinhTienDien() {
    float kwh, tienDien = 0;
    printf("\n--- CHUONG TRINH TINH TIEN DIEN TIEN THU ---\n");
    printf("Nhap so kWh dien tieu thu hang thang: ");
    scanf("%f", &kwh);

    if (kwh < 0) {
        printf("So kWh khong hop le!\n");
        return;
    }

    if (kwh <= 50) {
        tienDien = kwh * 1678;
    } else if (kwh <= 100) {
        tienDien = 50 * 1678 + (kwh - 50) * 1734;
    } else if (kwh <= 200) {
        tienDien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    } else if (kwh <= 300) {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    } else if (kwh <= 400) {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    } else {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    printf("Tong tien dien phai tra: %.0f VND\n", tienDien);
}

// Hàm main điều khiển Menu (Bài 1)
int main() {
    int luaChon;

    do {
        printf("\n===== MENU CHUONG TRINH LAB 3 =====\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh bac hai\n");
        printf("3. Tinh tien dien tieu thu\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                tinhHocLuc();
                break;
            case 2:
                giaiPTBacHai();
                break;
            case 3:
                tinhTienDien();
                break;
            case 0:
                printf("\nDa thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("\nLua chon khong hop le! Vui long chon lai tu 0 den 3.\n");
                break;
        }
    } while (luaChon != 0);

    return 0;
}