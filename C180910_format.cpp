#include <iostream>
#include <iomanip>

using namespace std;

void main() {
	int x = 12;
	int y = 1234;
	cout << "10���� : " << dec << x << endl;
	cout << "8���� : " << oct << x << endl;
	cout << "16���� : " << hex << x << endl;
	cout << endl;
	cout << "1234567890" << endl;
	cout << dec << y << endl;
	cout << setw(10) << y << endl;
}