#include <stdio.h>
#include <stdbool.h>

#define MAX 10

void NhapMaTran(float a[MAX][MAX], int n);
void XuatMaTran(float a[MAX][MAX], int n);
void TimDiemYenNgua(float a[MAX][MAX], int n);
bool KiemTraDiemYenNgua(float a[MAX][MAX], int n, int dong, int cot);

int main() {
    int n;
    float a[MAX][MAX];
    
    // Nhập kích thước ma trận với điều kiện 2 < n < 10
    do {
        printf("Nhap kich thuoc ma tran (2 < n < 10): ");
        scanf("%d", &n);
    } while (n <= 2 || n >= 10);
    
    // Nhập ma trận
    NhapMaTran(a, n);
    
    // Xuất ma trận
    printf("Ma tran vua nhap:\n");
    XuatMaTran(a, n);
    
    // Tìm và xuất các điểm yên ngựa
    printf("Cac diem yen ngua trong ma tran la:\n");
    TimDiemYenNgua(a, n);
    
    return 0;
}

// Hàm nhập ma trận
void NhapMaTran(float a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

// Hàm xuất ma trận
void XuatMaTran(float a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
}

// Hàm kiểm tra một phần tử có phải điểm yên ngựa hay không
bool KiemTraDiemYenNgua(float a[MAX][MAX], int n, int dong, int cot) {
    float giatri = a[dong][cot];
    
    // Kiểm tra lớn nhất trên dòng
    for (int j = 0; j < n; j++) {
        if (a[dong][j] > giatri)
            return false;
    }
    
    // Kiểm tra nhỏ nhất trên cột
    for (int i = 0; i < n; i++) {
        if (a[i][cot] < giatri)
            return false;
    }
    
    return true;
}

// Hàm tìm và xuất các điểm yên ngựa
void TimDiemYenNgua(float a[MAX][MAX], int n) {
    bool coDiemYenNgua = false;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (KiemTraDiemYenNgua(a, n, i, j)) {
                printf("Diem yen ngua tai a[%d][%d] = %.2f\n", i, j, a[i][j]);
                coDiemYenNgua = true;
            }
        }
    }
    
    if (!coDiemYenNgua)
        printf("Khong co diem yen ngua trong ma tran.\n");
}


