#include <iostream>

using namespace std;

/*struct grade {
	char *name;
	int english, math, computer;
};

void main() {
	grade s1;
	grade *p_s1 = &s1;

	p_s1->name = "gildong";
	(*p_s1).english = 95;
	p_s1->math = 85;
	s1.computer = 90;

	cout << "name : " << p_s1->name << endl;
	cout << "english : " << p_s1->english << endl;
	cout << "math : " << p_s1->math << endl;
	cout << "computer : " << p_s1->computer << endl;
}*/

class student {
private:
	char *name;
	int english, math, computer;

public:
	static int how_many;
	void set() {
		name = "gildong";
		english = 95;
		math = 85;
		computer = 90;
		++how_many;
	}

	void print() {
		cout << "name : " << name << endl;
		cout << "english : " << english << endl;
		cout << "math : " << math << endl;
		cout << "computer : " << computer << endl;
		cout << "how_many : " << how_many << endl;
	}
};

int student::how_many = 0;

// void person::act 에서 ::는 범위지정 연산자

void main() {
	student s1, s2;
	s1.set();
	s1.print();
	s2.set();
	s2.print(); 
	s1.print();
}