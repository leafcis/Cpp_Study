#include <iostream>
#define size_d 100 //�ڷ����� ���� (���� �ٲ� �� ����)
const int size_c = 200; //�ڷ����� ���� (���� �ٲ� �� ����)

using namespace std;

void main()
{
	int x = 2, yd;
	yd = x * size_d;
	cout << "yd = " << yd << endl;

	int yc;
	yc = x * size_c;
	cout << "yc = " << yc << endl;
}