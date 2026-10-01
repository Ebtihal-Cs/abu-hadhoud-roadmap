#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}
int  ReverseNumbers(int number) {
	int Remainder = 0, number2 = 0;
	while (number > 0) {
		Remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + Remainder;


	}
	return number2;


}
void PrintDigits(int Number) {
	int Remainder = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}
int main()
{
		
	PrintDigits(ReverseNumbers(ReadPositiveNumber("Please enter a positive number?")));

	cout << "\n";
}
