#include <iostream>

using namespace std;

void main()
{
	char munja = 'c'; //97
	int gap = 34; //34
	float silsu = 212.34, hap;
	hap = munja + gap + silsu; //�Ǽ��� �켱������ �� ũ�� ������ �Ǽ��� ��ȯ��

	cout << "hap�� �� = " << hap << endl;

	//cast ������
	//(�ڷ���)��ȯ���

	float x = 3.2, y = 4.6;
	cout << (int) 4.7; //�Ǽ� 4.7�� ���������� ��ȯ�ȴ�.
	cout << (float)10; //���� 10�� �Ǽ������� ��ȯ�ȴ�.
	cout << (int)(x + y); //���� x�� y�� �Ǽ������� ����Ǿ� ���� ��� �ش� ��� ���������� ��ȯ�ȴ�.

	float gap1 = 2.11, gap2 = 13.5;
	cout << "gap1 + gap2 = " << gap1 + gap2 << endl;
	cout << "gap2 / gap1 = " << (int)gap2 / (int)gap1 << endl;
}