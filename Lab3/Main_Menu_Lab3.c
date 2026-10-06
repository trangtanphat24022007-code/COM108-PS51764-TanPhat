#include <stdio.h>
#include <math.h>

// Hàm dọn dẹp bộ nhớ đệm bàn phím để tránh trôi lệnh scanf
void xoaBoNhoDem() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Bài 2: Tính học lực sinh viên
void tinhHocLuc() {
    float diem;
    printf("Nhap diem so sinh vien: ");
    if (scanf("%f", &diem) != 1) {
        printf("Diem so nhap vao khong hop le!\n");
        xoaBoNhoDem();
        return;
    }

    if (diem < 0.0 || diem > 10.0) {
        printf("Diem so nhap vao khong hop le!\n");
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

// Bài 3: Giải phương trình bậc hai
void giaiPTBacHai() {
    float a, b, c;
    printf("Nhap a: ");
    if (scanf("%f", &a) != 1) { xoaBoNhoDem(); return; }
    printf("Nhap b: ");
    if (scanf("%f", &b) != 1) { xoaBoNhoDem(); return; }
    printf("Nhap c: ");
    if (scanf("%f", &c) != 1) { xoaBoNhoDem(); return; }

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", -c / b);
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
}

// Bài 4: Tính tiền điện tiêu thụ hàng tháng
void tinhTienDien() {
    float kwh, tienDien = 0;
    printf("Nhap so kWh dien tieu thu: ");
    if (scanf("%f", &kwh) != 1) {
        printf("So kWh phai la so duong!\n");
        xoaBoNhoDem();
        return;
    }

    if (kwh <= 0) {
        printf("So kWh phai la so duong!\n");
        return;
    }

    if (kwh <= 50) {
        tienDien = kwh * 1.678;
    } else if (kwh <= 100) {
        tienDien = 50 * 1.678 + (kwh - 50) * 1.734;
    } else if (kwh <= 200) {
        tienDien = 50 * 1.678 + 50 * 1.734 + (kwh - 100) * 2.014;
    } else if (kwh <= 300) {
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (kwh - 200) * 2.536;
    } else if (kwh <= 400) {
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (kwh - 300) * 2.834;
    } else {
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (kwh - 400) * 2.927;
    }

    printf("Tong tien dien phai tra: %.3f dong\n", tienDien);
}

// Bài 1: Xây dựng Menu chương trình
int main() {
    int luaChon;

    do {
        printf("\n===== MENU CHUONG TRINH LAB 3 =====\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh bac hai\n");
        printf("3. Tinh tien dien tieu thu\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");
        
        if (scanf("%d", &luaChon) != 1) {
            printf("\nLua chon khong hop le! Vui long chon lai tu 0 den 3.\n");
            xoaBoNhoDem();
            continue;
        }

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
                printf("\nThoat chuong trinh thanh cong!\n");
                break;
            default:
                printf("\nLua chon khong hop le! Vui long chon lai tu 0 den 3.\n");
                break;
        }
    } while (luaChon != 0);

    return 0;
}