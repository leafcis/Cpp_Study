#include <iostream>

using namespace std;

class Add {
	int value;
public:
	Add() {
		value = 0;
	}
	Add(int i) {
		value = i;
	}
	friend int Plus(Add p1);
};

int Plus(Add p1) {
	return p1.value + 100;
}

void main() {
	Add aaa;
	Add bbb(200);
	cout << Plus(aaa) << endl;
	cout << Plus(bbb) << endl;
}