#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "enter three sides of a triangle";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
		cout << "yes";
	else
		cout << "no";
	system("pause");
}