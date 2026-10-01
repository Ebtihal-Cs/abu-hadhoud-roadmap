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

bool  IsPalindromeNumber(int Number) {
	return Number==ReverseNumbers(Number) ;
}
int main()
{


	cout << "------------------------------------------------\n";
	int Number = (ReadPositiveNumber("Please enter a positive number?"));
	if (IsPalindromeNumber(Number) == 1) 
		cout << "\nYes , it is a Palindrome number.\n";
	
	else 
		cout << "\nNo , it is NOT a Palindrome number.\n";
	

}
