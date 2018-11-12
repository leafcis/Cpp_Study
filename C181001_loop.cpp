#include <iostream>

using namespace std;

void main() {
	char ascii = 'A';
	char ch = 'A';
	int sum = 1;
	int k = 1;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i << " * " << j <<  " = " << i * j << endl;
		}
		cout << endl;
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 7 - i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	while (ascii >= 'A' && ascii <= 'Z')
	{
		cout << ascii++ << ' ';
	}
	cout << endl;
	cout << endl;

	while (ch <= 'K')
	{
		cout << ch++ << ' ';
		if (ch == 'G')
			break;
	}
	cout << '\n' << endl;

	do {
		sum *= k++;
	} while (k <= 5);
	cout << sum << '\n' << endl;

	sum = 0;
	for (int i = 1; i <= 10; i++) {
		if (i % 3 == 0)
			continue;
		else
			sum += i;
	}
	cout << sum << '\n' << endl;

}