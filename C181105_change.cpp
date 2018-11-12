#include <iostream>

using namespace std;

class integer {
private:
	int data;
public:
	integer() { data = 0; }
	integer(int value) { data = value; }
	void print() { cout << data << endl; }
};

void main() {
	integer data1;
	integer data2;
	int data = 3;
	data1 = integer(data); // 명시적 변환
	data2 = data; // 묵시적 변환
	data1.print();
	data2.print();
}