#include <iostream>
#define size_d 100 //자료형이 없음 (값을 바꿀 수 없음)
const int size_c = 200; //자료형이 있음 (값을 바꿀 수 없음)

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