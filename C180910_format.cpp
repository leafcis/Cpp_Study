#include <iostream>
#include <iomanip>

using namespace std;

void main() {
	int x = 12;
	int y = 1234;
	float z = 12.30;
	float a = 10.0 + 2.0 / 3.0;

	cout << "10진수 : " << dec << x << endl;
	cout << "8진수 : " << oct << x << endl;
	cout << "16진수 : " << hex << x << endl;


	cout << "1234567890" << endl;
	cout << dec << y << endl;
	cout << setw(10) << y << endl;

	cout << endl;

	cout << "x = " << z << endl; //12.3
	cout << "y = " << a << endl; //10.6667

	cout.precision(4); //정밀도

	cout << endl;

	cout << "x = " << z << endl; //12.3
	cout << "y = " << a << endl; //10.67

	cout.setf(ios::showpoint); //0을 나타냄

	cout.precision(6); //정밀도

	cout << endl;

	cout << "x = " << z << endl; //12.3000
	cout << "y = " << a << endl; //10.6667

	cout.precision(4);

	cout << endl;

	cout << "x = " << z << endl; //12.30
	cout << "y = " << a << endl; //10.67
}