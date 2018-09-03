#include <iostream>

using namespace std;

void main()
{
	char munja = 'c'; //97
	int gap = 34; //34
	float silsu = 212.34, hap;
	hap = munja + gap + silsu; //실수의 우선순위가 더 크기 때문에 실수로 변환됨

	cout << "hap의 값 = " << hap << endl;

	//cast 연산자
	//(자료형)변환대상

	float x = 3.2, y = 4.6;
	cout << (int) 4.7; //실수 4.7이 정수형으로 변환된다.
	cout << (float)10; //정수 10이 실수형으로 변환된다.
	cout << (int)(x + y); //변수 x와 y가 실수형으로 선언되어 있을 경우 해당 결곽 정수형으로 반환된다.

	float gap1 = 2.11, gap2 = 13.5;
	cout << "gap1 + gap2 = " << gap1 + gap2 << endl;
	cout << "gap2 / gap1 = " << (int)gap2 / (int)gap1 << endl;
}