#include <iostream>

using namespace std;

/*
class student {
private:
	int id;
	float score;
public:
	student(int i, float s) { id = i; score = s; }
	void print() { cout << id << " " << score << endl; }
	operator int() { return (int)score; }
};

void main() {
	student s(11031, 95.4);
	s.print();
	cout << int(s) << endl;
}
*/

class Add {
private:
	int value;
public:
	Add(int i) { value = i; }
	void print() { cout << value << endl; }
	Add add() { value += 1; return (*this); }
	Add operator++() { value += 10; return (*this); } //return value도 같은 결과
};

void main() {
	Add a1(100), a2(200);
	++a1;
	a1.print();
	a2.operator++();
	a2.print();
}