#include <iostream>

using namespace std;

void main() {
	enum{red = 2, blue, green, white}; //blue = 3, green = 4, white = 5
	//enum{red = 1, blue, green, white = 7}; blue = 2, green = 3, white = 7
	//enum{red = 10, blue, green = 50, white};  blue = 11, white = 51

	unsigned short int Day;
	enum Week {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
	Week Weekend;

	cout << "Week : Mon_0, Tue_1, Wed_2, Thu_3, Fri_4, Sat_5, Sun_6 \n";
	cout << "Weekend : Sat_5, Sat_6" << endl;
	cout << "주말은 : ";

	cin >> Day;
	if (Day == Sat || Day == Sun)
		cout << "주말입니다" << endl;
	else
		cout << "주말이 아닙니다" << endl;
}