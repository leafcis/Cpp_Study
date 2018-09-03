#include <iostream>

using namespace std;

void main() {
	int data = 100;
	int &rData = data;

	cout << "data : " << data << ", " << "rData : " << rData << endl;
	
	rData = 200;

	cout << "data : " << data << ", " << "rData : " << rData << endl;
	cout << "data Address : " << &data << ", " << "rData Address : " << &rData << endl;
}