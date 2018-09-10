#include <iostream>
#define SizeName 10
using namespace std;
const int SizeAdd = 20;

void main() {
	/*int a;
	cout << "정수 a = ";
	cin >> a;
	cout << "정수 a = " << a << " 이다" << endl;
	float b;
	cout << "실수 b = ";
	cin >> b;
	cout << "실수 b = " << b << " 이다" << endl;*/
	char name[SizeName];
	char address[SizeAdd];
	cout << "이름은 : ";
	cin >> name; //&name[0]
	cout << "주소는 : ";
	cin >> address;
	cout << "이름은 " << name << "이고, ";
	cout << "주소는 " << address << "입니다.\n";
}