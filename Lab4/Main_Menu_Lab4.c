#include <stdio.h>
#include <math.h>

// Hàm cho Bài 2 (Chức năng 1): Tính trung bình cộng các số chia hết cho 2
void chucNang1() {
    int min, max;
    printf("\n--- TINN TRUNG BINH TONG CAC SO CHIA HET CHO 2 ---\n");
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);

    // Bắt lỗi nếu min > max
    if (min > max) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
        return;
    }

    int tong = 0;
    int bienDem = 0;

    for (int i = min; i <= max; i++) {
        if (i % 2 == 0) { // Kiểm tra chia hết cho 2 (đúng cho cả số âm)
            tong += i;
            bienDem++;
        }
    }

    // Bắt lỗi tránh chia cho 0
    if (bienDem == 0) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
    } else {
        float trungBinh = (float)tong / bienDem; // Ép kiểu float
        printf("Tong cac so chia het cho 2: %d\n", tong);
        printf("So luong cac so chia het cho 2: %d\n", bienDem);
        printf("Trung binh cong: %.2f\n", trungBinh);
    }
}

// Hàm cho Bài 3 (Chức năng 2): Kiểm tra số nguyên tố
void chucNang2() {
    int x;
    printf("\n--- KIEM TRA SO NGUYEN TO ---\n");
    printf("Nhap so nguyên x: ");
    scanf("%d", &x);

    if (x < 2) {
        printf("[%d] khong phai la so nguyen to.\n", x);
    } else {
        int isPrime = 1; // Giả sử x là số nguyên tố (1: đúng, 0: sai)
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("[%d] la so nguyen to.\n", x);
        } else {
            printf("[%d] khong phai la so nguyen to.\n", x);
        }
    }
}

// Hàm cho Bài 4 (Chức năng 3): Kiểm tra số chính phương
void chucNang3() {
    int x;
    printf("\n--- KIEM TRA SO CHINH PHUONG ---\n");
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    // Xử lý các trường hợp âm
    if (x < 0) {
        printf("[%d] khong phai la so chinh phuong.\n", x);
        return;
    }

    // Xử lý riêng trường hợp x = 0 (vì 0 = 0 * 0)
    if (x == 0) {
        printf("[%d] la so chinh phuong.\n", x);
        return;
    }

    int isSquare = 0;
    for (int i = 1; i * i <= x; i++) {
        if (i * i == x) {
            isSquare = 1;
            break; // Thoát vòng lặp sớm khi tìm thấy
        }
    }

    if (isSquare) {
        printf("[%d] la so chinh phuong.\n", x);
    } else {
        printf("[%d] khong phai la so chinh phuong.\n", x);
    }
}

// Bài 1: Hệ thống Menu lặp bằng do-while và switch-case
int main() {
    int luaChon;

    do {
        printf("\n+-----------------------------------------------+\n");
        printf("|          MENU CHUONG TRINH LAB 4              |\n");
        printf("+-----------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2 |\n");
        printf("| 2. Kiem tra So nguyen to                     |\n");
        printf("| 3. Kiem tra So chinh phuong                   |\n");
        printf("| 4. Thoat chuong trinh                         |\n");
        printf("+-----------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-4): ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                chucNang1();
                break;
            case 2:
                chucNang2();
                break;
            case 3:
                chucNang3();
                break;
            case 4:
                printf("\nDa thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("\nLua chon khong hợp le! Vui long chon lai tu 1 den 4.\n");
                break;
        }
    } while (luaChon != 4);

    return 0;
}