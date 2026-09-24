#include <stdio.h>
#define PI 3.14159
int main(){
    float dai, rong, bankinh;
    scanf("%f %f %f", &dai, &rong, &bankinh);
    printf("Chu vi hinh chu nhat: %f\n", (dai + rong) * 2);
    printf("Dien tich hinh chu nhat: %f\n", dai * rong);
    printf("Chu vi hinh tron: %.2f\n", 2 * PI * bankinh);
    printf("Dien tich hinh tron: %.2f\n", PI * bankinh * bankinh);
    return 0;
}