#include <iostream>

using namespace std;

// Hàm kiểm tra xem 3 số có phải là độ dài 3 cạnh của một tam giác không
bool isTriangle(float a, float b, float c) {
	return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
	float a, b, c; // Khai báo biến để lưu trữ 3 cạnh tam giác
	
	// Nhập các cạnh từ người dùng
	cout << "Nhap canh a: ";
	cin >> a;
	cout << "Nhap canh b: ";
	cin >> b;
	cout << "Nhap canh c: ";
	cin >> c;
	
	// Kiểm tra xem các cạnh có hợp lệ không
	if (isTriangle(a, b, c)) {
		cout << "3 so nhap vao la do dai 3 canh cua mot tam giac." << endl;
	} else {
		cout << "3 so nhap vao khong phai la do dai 3 canh cua mot tam giac." << endl;
	}
	
	return 0; // Kết thúc chương trình
}
