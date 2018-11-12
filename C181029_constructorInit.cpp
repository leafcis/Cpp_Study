#include <iostream>

using namespace std;

class student {
private: 
	int id, score;
public:
	student() { id = 0; score = 0; }
	student(int i, int s) { id = i; score = s; }
	void set(int i, int s) { id = i; score = s; }
	void print() { cout << id << " = " << score << endl; }
};

int main(void) {
	student s1;
	student s2(11031, 90);
	student s3[100];

	s1.print();
	s2.print();
	s3[0].print();
	s1.set(11302, 95);
	s1.print();
}