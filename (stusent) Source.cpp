#include <iostream>
#include <string>
using namespace std;
int main() {
	string name;
	int n1, n2, n3, avg;
	cout << "enter student's name";
	cin >> name;
	cout << "enter your marks";
	cin >> n1 >> n2 >> n3;
	avg = (n1 + n2 + n3) / 3;
	if (avg > 17)
		cout << "Great";
	else if (avg <= 12 && avg < 17)
		cout << "Normal";
	else if (avg < 12)
		cout << "Fail";
	system("pause");
	return 0;
	}