#include <iostream>

using namespace std;

int main() {
	cout << "10진 정수형 상수 = " << 80 << endl;
	cout << "10진수로 표현한 8진 정수형 상수(0120) = " << 0120 << endl;
	cout << "10진수로 표현한 16진 정수형 상수(0x50) = " << 0x50 << endl;

	cout << "U"; //문자열
	cout << 'U'; //문자상수

	cout << 123.45000 << endl; //0이 생략되고 123.45
	cout << 15.0 << endl; //0이 생략되고 15
	cout << 15.01 << endl; //15.01
}