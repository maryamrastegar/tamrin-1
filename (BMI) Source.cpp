#include<iostream>
#include<string>
using namespace std;
int main() {
	float weight,height, BMI;
	cout << "enter your weight (kg)";
	cin >> weight;
	cout << "enter your height(m)";
	cin >> height;
	BMI = weight / (height*height);
	if (BMI < 18.5)
		cout << " Underwight";
	else if (BMI > 18.5 && BMI < 24.9)
		cout << "Normal";
	else if (BMI > 24 && BMI < 29.9)
		cout << "overweight";
	else if (BMI > 30 && BMI < 34.9)
		cout << "Obse";
	else if (BMI > 35)
		cout << "Extremely obse";
	system("pause");
	return 0;
}