#include <iostream>

using namespace std;

void main() {
	int ion = 0;
	cout << "�ڸ� ���� ��ġ\n";
	cout.setf(ios::showpos); //��� �տ� + ��ȣ�� �ٿ���
	cout.setf(ios::right, ios::adjustfield); //������ ����
	cout.setf(ios::showpoint); //�Ҽ��� ���� ���� 0�� ��Ÿ��
	while (ion < 3) {
		cout.width(8);
		cout << ++ion << endl;
	}
	cout << "--------------------------\n";
	cout.setf(ios::left, ios::adjustfield);

	while(ion > 0) {
		cout.width(8);
		cout << ion-- << endl;
	}
	cout << "--------------------------\n";
	cout.setf(ios::internal, ios::adjustfield);
	while (ion < 3) {
		cout.width(8);
		cout << ++ion << endl;
	}
	cout << "--------------------------\n";
}