#include <iostream> 

using namespace std;

class student {
private:
	int score;
	char *name;
public:
	student(int size, const char str[], int s);
	~student() { delete[] name; cout << "�Ҹ��� �۵�" << endl; }
	void print() { cout << name << " = " << score << endl; }
};

student::student(int size, const char str[], int s) {
	name = new char[size]; //������ �����Ҵ�
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
	} //�Ҹ��� ����
	s1.print();
}