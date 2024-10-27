#include <stdio.h>

int Sum(int n) {
    if (n == 0) return 0;    // Điều kiện dừng: khi n = 0, trả về 0
    return Sum(n - 1) + n;   // Gọi lại hàm Sum với n-1 và cộng với n
}

int main() {
    int n = 10;
    printf("S(%d) = %d\n", n, Sum(n));  // Kết quả: S(10) = 55
    return 0;
}
