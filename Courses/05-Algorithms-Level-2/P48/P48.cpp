#include<iostream>
#include<cmath>
using namespace std;

int MyFloor(float Number)
{
	if (Number > 0)
		return int(Number);
	else
		return int(Number) - 1;
}

int ReadNumber() {
	int Number;
	cout << "Enter a Number : \n";
	cin >> Number;
	return Number;
}

int main() {
	float Number = ReadNumber();
	cout << "My Floor Result : " << MyFloor(Number) << endl;
	cout << "C++ Floor Result : " << floor(Number) << endl;


}
