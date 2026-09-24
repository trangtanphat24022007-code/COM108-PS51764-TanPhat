#include <stdio.h>
int main(){
    float a, b;
    float x;
    printf("nhap he so a (a != 0): ");
    printf("nhap he so b: ");
    scanf("%f %f", &a, &b);
    printf("Nghiem cuua phuong trinh la: x = %.2f/n", -b / a);
    return 0;
}