#include <iostream>
#include <iomanip>

using namespace std;

void main() {
	int ion = 30;
	cout << "the number of ion : ";
	cout.setf(ios::showpos);
	cout << ion << endl;

	cout << "16���� ��� \n";
	cout << hex << ion << endl;
	
	cout.setf(ios::uppercase);
	cout << ion << endl;

	cout.setf(ios::showbase);
	cout << ion << endl;
}