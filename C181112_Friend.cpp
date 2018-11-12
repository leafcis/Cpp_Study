#include <iostream>

using namespace std;

/*
class course;
class student
{
private:
	int id, score;
public:
	student(int i, int s) { id = i; score = s; }
	void print() { cout << id << " " << score << endl; }
	friend void calculate(student &s, const course& c);
};

class course {
private:
	int id, english, math, computer;
public:
	course(int i, int e, int m, int c) {
		id = i; 
		english = e;
		math = m;
		computer = c;
	}
	friend void calculate(student& s, const course& c);
};

void calculate(student &s, const course &c) {
	if (s.id == c.id)
		s.score = (c.english + c.math + c.computer) / 3;
}

void main() {
	student s(11031, 0);
	course c(11031, 90, 80, 95);
	s.print();
	calculate(s, c);
	s.print();
}
*/

class AAA {
	int value;
	friend class BBB;
public:
	AAA(int v) { value = v; }
	void Show() { cout << value << endl; }
};

class BBB {
public:
	int Initial(AAA a1) { return a1.value; } // AAA 멤버 참조. But, AAA는 BBB 멤버 접근 불가
};

void main() {
	AAA aa1(10);
	BBB bb1;
	cout << bb1.Initial(aa1) << endl;
	aa1.Show();
}