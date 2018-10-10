#include <stdio.h>

float nuachuvitamgiac(int a, int b, int c){
    return (float)(a+b+c)/2;
}

int main() {
    int a, b, c;
    printf("nhap a = ");
    scanf("%d", &a);
    printf("nhap b =");
    scanf("%d", &b);
    printf("nhap c =");
    scanf("%d", &c);
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Do dai mot canh tam giac khong the nho hon hoac bang 0");
        printf("dung chuong trinh");
    } else if (a + b <= c) {
        printf("Tong hai canh cua mot tam giac luon phai lon hon canh con lai(theo bat dang thuc tam giac)");
        printf("dung chuong trinh");
    } else{
        printf("ket qua nua chu vi tam giac");
    }
    printf("Chu vi = %.2f", (float)(a+b+c)/2);
    return 0;
}