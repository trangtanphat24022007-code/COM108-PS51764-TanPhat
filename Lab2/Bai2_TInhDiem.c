#include <stdio.h>
int main() {
int toan, ly, hoa;
printf("Nhap diem toan, ly, hoa: ");
scanf("%d %d %d", &toan, &ly, &hoa);
float dtb = (float)(toan * 3 + ly * 2 + hoa) / 6;
printf("Diem trung binh: %.2f\n" , dtb);
return 0;
}