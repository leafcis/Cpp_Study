#include <iostream>

using namespace std;

void main() {
	const int Length = 30;
	char name[Length];
	char address[Length];
	cout << "�̸��� : ";
	cin.getline(name, Length);
	cout << "�ּҴ� : ";
	cin.getline(address, Length);
	cout << "���� �̸��� " << name << "�Դϴ�.\n";
	cout << "�׸���, " << address << "�� ��� �ֽ��ϴ�.\n";
}