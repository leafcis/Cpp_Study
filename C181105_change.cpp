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
	data1 = integer(data); // ����� ��ȯ
	data2 = data; // ������ ��ȯ
	data1.print();
	data2.print();
}