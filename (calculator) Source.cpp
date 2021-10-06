#include<iostream>
#include<string>
#include <cmath>
using namespace std;
int main() 
{
	float a, b, res;
	string op;
	cout << "enter a number";
	cin >> a;
	cout << "choose the operator(*,radical,cos,cot,tan,factorial)";
	cin >> op;
	if (op == "*")
	{
		cout << "enter second number";
		cin >> b;
		 res = a*b;
		 cout << res;
	}
	else if (op == "radical") {
		res = sqrt(a);
		cout << res;
	}
	else if (op == "cos"){
		res = cos(a);
		cout << res;
	}
	else if (op == "cot") {
		res= cos(a) / sin(a);
		cout << res;
	}
	else if (op == "tan") {
		res = tan(a);
		cout << res;
	}
	else if (op == "factorial") {
		double f = 1;
		for (int i = 1; i <= a; i++) {
			f *= i;
		}
		cout << f;
	}
	system ("pause");
	return 0;
}