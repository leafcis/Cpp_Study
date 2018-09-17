#include <iostream>

using namespace std;

void main() {
	int w, x, y;

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

	cout << "w값 = " << w << "x값 = " << x << "y값 = " << y << endl;


}