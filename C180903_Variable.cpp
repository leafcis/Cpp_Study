#include <iostream>

using namespace std;

extern int a, b; //�ܺ� ���� (a = 20, b = 5)

void no_ret() {
	int x = 0;
	static int y = 0; //���� ����
	x++;
	y++;
	cout << "x�� = " << x << ", y�� = " << y << endl;
}

void main() {
	int i;
	for (i = 0; i < 3; i++)
		no_ret();
	cout << "a * b = " << a * b << endl;

	register int b;
	for (b = 4; b > 0; b--)
	{
		register int j = 10;
		j *= b;
		cout << j << "\t";
	}
	cout << b << endl;
}