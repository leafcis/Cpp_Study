#include <iostream>

using namespace std;

void main() {
	int ion = 0;
	cout << "자리 지정 위치\n";
	cout.setf(ios::showpos); //양수 앞에 + 부호를 붙여줌
	cout.setf(ios::right, ios::adjustfield); //오른쪽 정렬
	cout.setf(ios::showpoint); //소수점 뒤의 끝의 0을 나타냄
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