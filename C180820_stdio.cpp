#include <iostream> 
using namespace std;
void main()
{
	cout << "Hello, World!\n";

	cout << 12.5 << "\n";
	cout << 12.5 << "\n";

	int d;
	cout << "값을 입력하세요 : ";
	cin >> d;

	cout << "입력 값은 : " << d << "입니다\n";

	int a = 10;
	float b = 2.5;
	char c = 'e';
	float e = 'e';
	
	cout << a << "\n" << b << "\n" << c << "\n" << "잘못된 자료형을 사용 : " << e << "\n";
} 