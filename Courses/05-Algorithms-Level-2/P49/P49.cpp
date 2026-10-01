#include<iostream>
#include<cmath>
using namespace std;

int MyCeil(float Number)
{
	if (Number > 0)
		return int(Number)+1;
	else
		return int(Number) ;
}

int ReadNumber() {
	int Number;
	cout << "Enter a Number : \n";
	cin >> Number;
	return Number;
}

int main() {
	float Number = ReadNumber();

	cout << "My Ceiling Result : " << MyCeil(Number) << endl;
	cout << "C++ Ceiling Result : " << ceil(Number) << endl;


}
