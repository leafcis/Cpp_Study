#include <iostream>

using namespace std;

void main() {
	int x; 
	cout << "�ϳ��� ����� �Է��Ͻÿ�! : ";
	cin >> x;
	switch (x) {
	case 1: 
		cout << "�Էµ� ���� 1�̴�." << endl;
		break;
	case 2:
		cout << "�Էµ� ���� 2�̴�." << endl;
		break;
	case 3:
		cout << "�Էµ� ���� 3�̴�." << endl;
		break;
	case 4:
		cout << "�Էµ� ���� 4�̴�." << endl;
		break;
	case 5:
		cout << "�Էµ� ���� 5�̴�." << endl;
		break;
	default:
		cout << "case���� ������� ���� �ԷµǾ���!" << endl;
	}
}