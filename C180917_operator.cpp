#include <iostream>

using namespace std;

void main() {
	int w, x, y;

	cout << "�� �� �Է� : ";
	cin >> x >> y;

	/*
	if (x > 3 || y < 15)
		cout << "OK" << endl;
	*/

	if (x > 3 && y < 15)
		cout << "OK" << endl; //x�� 3 �ʰ��̰�, y�� 15 �̸��� ���� OK;

	w = 10;
	x = 15;
	w = w < x || 3 + 2 != 5;
	x = !w;
	y = x && 7 >= 5;

	cout << "w�� = " << w << "x�� = " << x << "y�� = " << y << endl;


}