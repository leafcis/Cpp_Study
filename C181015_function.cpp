#include <iostream>

using namespace std;

inline float area(float a, float b) { return a * b; }
void op_func(int x, int y);
void main() {
	int x, y, result1, result2;
	x = 32, y = 45;
	cout << "ȣ���ϱ� ���� x, y�� : x = " << x << " y = " << y << endl;

	op_func(x, y);
	cout << "ȣ���� ���� x, y�� : x = " << x << " y = " << y << endl;

	result1 = area(9.2, 4.5);
	result2 = area(2.5, 12.5);
}

void op_func(int x, int y) {
	x = x + 5;
	y = y - 5;
	cout << "ȣ���Լ� ���� ������ : x = " << x << " y = " << y << endl;
}