#include <stdio.h>

int main() {
    float toan, van, anh, tongDiem, diemTrungBinh;
    printf("Nhap diem mon toan: ");
    scanf("%f", &toan);

    printf("Nhap diem mon van: ");
    scanf("%f", &van);

    printf("Nhap diem mon anh: ");
    scanf("%f", &anh);

    tongDiem = toan + van + anh;
    diemTrungBinh = tongDiem / 3;

    printf("Tong diem la: %.2f\n", tongDiem);
    printf("Diem trung binh la: %.2f\n", diemTrungBinh);

    return 0;
}
