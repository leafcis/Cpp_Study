#include <iostream>

using namespace std;

inline float area(float a, float b) { return a * b; }
void op_func(int x, int y);
void main() {
	int x, y, result1, result2;
	x = 32, y = 45;
	cout << "호출하기 전의 x, y값 : x = " << x << " y = " << y << endl;

	op_func(x, y);
	cout << "호출한 후의 x, y값 : x = " << x << " y = " << y << endl;

	result1 = area(9.2, 4.5);
	result2 = area(2.5, 12.5);
}

void op_func(int x, int y) {
	x = x + 5;
	y = y - 5;
	cout << "호출함수 내의 연산결과 : x = " << x << " y = " << y << endl;
}