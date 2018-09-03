#include <iostream>

using namespace std;

void main() {
	int a2[3] = { 1, 2, 3 };
	int b2[2][2] = { {1, 2}, {3, 4} };

	for (int i = 0; i < 3; i++)
	{
		cout << "a2[" << i << "] = " << a2[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << "b2[" << i << "]" << "[" << j << "] = " << b2[i][j] << endl;
	}
}