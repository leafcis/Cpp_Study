#include <iostream>

using namespace std;

class WhoAmI {
public:
	int id;

	WhoAmI(int id);
	void ShowYourSelf() const;
};

WhoAmI::WhoAmI(int id) {
	this->id = id;
}

void WhoAmI::ShowYourSelf() const {
	cout << "ID = " << this->id << endl;
	
	//this : 按眉 林家
	//* this : 按眉 磊脚

}

void main() {
	WhoAmI obj1(1);
	WhoAmI obj2(2);
	WhoAmI obj3(3);
	
	obj1.ShowYourSelf();
	obj2.ShowYourSelf();
	obj3.ShowYourSelf();

	cout << "&obj1 = " << &obj1 << endl;
	cout << "&obj2 = " << &obj2 << endl;
	cout << "&obj3 = " << &obj3 << endl;
}


/*
class student {
private : 
	int id, score;
public :
		student(int i, int s) : id(i), score(s) {}
		student upScore() { score += 5; return *this; }
		student downScore() { score -= 5; return *this; }
		unsigned address() { return (unsigned)this; }
		void print() { cout << "ID : " << id << " SCORE : " << score << endl; }
};

void main() {
	student s1(1116, 98), s2(1106, 99), s3(1112, 98);
	s1.upScore().print();
	s1.downScore().print();
	s3.print();

	cout << "s2's address : " << s2.address() << endl;
}
*/