#include<iostream>
#include<cmath>
using namespace std;

int MySqrt(float Number)
{
	return pow(Number, 0.5);
	
}

int ReadNumber() {
	int Number;
	cout << "Enter a Number : \n";
	cin >> Number;
	return Number;
}

int main() {
	float Number = ReadNumber();
	cout << "My Sqrt Result : " << MySqrt(Number) << endl;
	cout << "C++ Sqrt Result : " << sqrt(Number) << endl;


}
