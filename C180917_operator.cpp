#include <iostream>

using namespace std;

void main() {
	int w, x, y, a = 10, b = 9, c, result1, result2, z1, z2;

	cout << "두 수 입력 : ";
	cin >> x >> y;

	/*
	if (x > 3 || y < 15)
		cout << "OK" << endl;
	*/

	if (x > 3 && y < 15)
		cout << "OK" << endl; // x가 3 초과이고, y가 15 미만일 때만 OK;

	w = 10;
	x = 15;
	w = w < x || 3 + 2 != 5;
	x = !w;
	y = x && 7 >= 5;

	cout << "w값 = " << w << " x값 = " << x << " y값 = " << y << endl;

	a++; // 11
	b++; // 10
	cout << "a = " << a << " b = " << b << endl; // 11 10
	a--; // 10
	b--; // 9
	cout << "a = " << a << " b = " << b << endl; // 10 9

	++a; // 11
	++b; // 10
	cout << "a = " << a << " b = " << b << endl; // 11 10

	c = a++; // c = 11, a == 12
	++b;

	cout << "c = " << c << " b = " << b << endl; // 11 11

	x = 5;
	y = 7;

	result1 = ++x - 1;
	result2 = ++x + --y;
	cout << "result1 = " << result1 << endl; // 5
	cout << "result2 = " << result2 << endl; // 13

	x = 6;
	y = 7;
	result2 = ++x + y--;
	cout << "result2 = " << result2 << endl; // 14

	x = 3;
	y = 7;
	z1 = x != y ? x-- : ++y + 3;
	cout << "z1의 값 = " << z1 << endl; // 3
	z2 = x > y ? ++y : --y + 2;
	cout << "z2의 값 = " << z2 << endl; // 8
	cout << "결과 = " << ((x < y) ? 15 : 10) << endl; // 15
}