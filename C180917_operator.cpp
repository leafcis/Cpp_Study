#include <iostream>

using namespace std;

void main() {
	int w, x, y, a = 10, b = 9, c;

	cout << "두 수 입력 : ";
	cin >> x >> y;

	/*
	if (x > 3 || y < 15)
		cout << "OK" << endl;
	*/

	if (x > 3 && y < 15)
		cout << "OK" << endl; //x가 3 초과이고, y가 15 미만일 때만 OK;

	w = 10;
	x = 15;
	w = w < x || 3 + 2 != 5;
	x = !w;
	y = x && 7 >= 5;

	cout << "w값 = " << w << " x값 = " << x << " y값 = " << y << endl;

	a++; //11
	b++; //10
	cout << "a = " << a << " b = " << b << endl; //11 10
	a--; //10
	b--; //9
	cout << "a = " << a << " b = " << b << endl; //10 9

	++a; //11
	++b; //10
	cout << "a = " << a << " b = " << b << endl; //11 10

	c = a++;
	++b;

	cout << "c = " << c << " b = " << b << endl; //11 11
}