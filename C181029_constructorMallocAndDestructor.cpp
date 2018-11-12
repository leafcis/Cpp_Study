#include <iostream> 

using namespace std;

class student {
private:
	int score;
	char *name;
public:
	student(int size, const char str[], int s);
	~student() { delete[] name; cout << "소멸자 작동" << endl; }
	void print() { cout << name << " = " << score << endl; }
};

student::student(int size, const char str[], int s) {
	name = new char[size]; //생성자 동적할당
	for (int i = 0; i < size && str[i] != '\0'; i++) {
		name[i] = str[i];
	}
	name[size-1] = '\0';
	score = s;
}

void main() {
	student s1(8, "chulsoo", 90);
	if(1) {
		student s2(7, "soonee", 85);
		s2.print();
	} //소멸자 실행
	s1.print();
}