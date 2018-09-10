#include <iostream>
#include <iomanip>

using namespace std;

void main() {
	int ion = 30;
	cout << "the number of ion : ";
	cout.setf(ios::showpos);
	cout << ion << endl; //+30

	cout << "16진수 사용 \n";
	cout << hex << ion << endl; //1e
	
	cout.setf(ios::uppercase);
	cout << ion << endl; //1E

	cout.setf(ios::showbase);
	cout << ion << endl; //0X1E
}