#include <iostream>
using namespace std;

class person {
	int man, woman, sum;
public:
	void itset(int a, int b);
	int itsum();
};

void person::itset(int a, int b) {
	man = a;
	woman = b;
}
int person::itsum() {
	sum = man + woman;
	return sum;
}

int main() {
	person p1, p2;
	p1.itset(2, 3);
	p2.itset(20, 30);
	cout << "sum1 = " << p1.itsum() << "\n" << "sum2 = " << p2.itsum() << "\n";
}