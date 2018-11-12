#include <iostream>

using namespace std;

void change(int, int&);
void main() {
	int a, b;
	a = 1; b = 1;
	change(a, b);
	cout << a << endl << b << endl;
}

void change(int x, int& y) {
	int t;
	t = x;
	y = 2;
	x = y;
}