#include <iostream>
#define SizeName 10
using namespace std;
const int SizeAdd = 20;

void main() {
	/*int a;
	cout << "���� a = ";
	cin >> a;
	cout << "���� a = " << a << " �̴�" << endl;
	float b;
	cout << "�Ǽ� b = ";
	cin >> b;
	cout << "�Ǽ� b = " << b << " �̴�" << endl;*/
	char name[SizeName];
	char address[SizeAdd];
	cout << "�̸��� : ";
	cin >> name; //&name[0]
	cout << "�ּҴ� : ";
	cin >> address;
	cout << "�̸��� " << name << "�̰�, ";
	cout << "�ּҴ� " << address << "�Դϴ�.\n";
}