#include <iostream>

using namespace std;

void main() {
	int x; 
	cout << "하나의 양수를 입력하시오! : ";
	cin >> x;
	switch (x) {
	case 1: 
		cout << "입력된 값은 1이다." << endl;
		break;
	case 2:
		cout << "입력된 값은 2이다." << endl;
		break;
	case 3:
		cout << "입력된 값은 3이다." << endl;
		break;
	case 4:
		cout << "입력된 값은 4이다." << endl;
		break;
	case 5:
		cout << "입력된 값은 5이다." << endl;
		break;
	default:
		cout << "case문과 관계없는 값이 입력되었다!" << endl;
	}
}