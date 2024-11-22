#include <stdio.h>
int main() {
    int a, b, c;
    printf("Nhap 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b){
        int dem = a; 
        a = b;
        b = dem;
    }
    if (a > c) {
        int dem = a;
        a = c;
        c = dem;
    }
    if (b > c) {
        int dem = b; 
        b = c;
        c = dem;
    }
    printf("Thu tu tu nho den lon: %d %d %d\n", a, b, c);
    return 0;
}
