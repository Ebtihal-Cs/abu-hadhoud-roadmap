#include<iostream>
#include <cmath> 

using namespace std;
float ReadNumber(string Massege) {
	int number;
	cout << Massege;
	cin >> number;
	return number;
}
float ABS(float Number) {
	if (Number < 0) {
		return -Number;
	}
	else {
		return Number;
	}
}
int main() {
	float Number = ReadNumber("Pleas Enter Number ?\n");
	cout << "My abs Result : " << ABS(Number) << endl;
	cout << "C++ abs Result : " << abs(Number) << endl;

}