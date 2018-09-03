#include <iostream>

using namespace std;

int sum(int a, int b) {
	int result = a + b;
	return result;
}

void main() {
	int a, b;
	cin >> a >> b;

	cout << sum(a, b) << endl;
}