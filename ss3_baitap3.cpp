#include <stdio.h>

int main() {
	const float PI = 3.14;
    float r, chuVi, dienTich;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    chuVi = 2 * PI * r;
    dienTich = PI * r * r;
    printf("Chu vi hinh tron la: %.2f\n", chuVi);
    printf("Dien tich hinh tron la: %.2f\n", dienTich);
    return 0;
}
