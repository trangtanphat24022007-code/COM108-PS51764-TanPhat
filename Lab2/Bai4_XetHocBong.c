#include <stdio.h>
int main(){
    float diemTB;
    int HanhKiem;
    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);
    printf("Nhap hanh kiem (1: tot, 2: khac): ");
    scanf("%d", &HanhKiem);
    int dkDiem = (diemTB >= 8.0);
    int dkHanhKiem = (HanhKiem == 1);
    int dkHocBong = dkDiem && dkHanhKiem;
    printf("Dieu kien diem trung binh >= 8.0: %d\n", dkDiem);
    printf("Dieu kien hanh kiem tot: %d\n", dkHanhKiem);
    printf("Dieu kien xet hoc bong (1: dat, 0: khong dat): %d\n", dkHocBong);
    return 0;
}