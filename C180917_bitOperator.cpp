#include <iostream>

using namespace std;

void main() {
	int x = 218, y = 84, z = 14, result1, result2, result3, result4;

	result1 = x & y;
	result2 = x ^ y;
	result3 = z >> 2;
	result4 = z << 2;

	cout << "x & y = " << result1 << endl;
	cout << "x ^ y = " << result2 << endl;
	cout << "x와 y의 비트부정 결과 = " << ~(++x) << endl;
	cout << "z의 시프트 연산 (오른쪽 2칸) 결과 = " << result3 << endl;
	cout << "z의 시프트 연산 (왼쪽 2칸) 결과 = " << result4 << endl;

	x = 9;
	y = 9;
	z = 9;

	x &= 6; y |= 6; z ^= 6;
	cout << "x & 6 = " << x << endl;
	cout << "y | 6 = " << y << endl;
	cout << "z ^ 6 = " << z << endl;
}