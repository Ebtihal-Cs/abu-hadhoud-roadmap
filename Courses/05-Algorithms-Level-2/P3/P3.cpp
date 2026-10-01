
#include <iostream>
using namespace std;
enum enPerfectNumberOrNot{Perfect=1,NotPerfect=2};
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
bool isPerfectNumber(int Number) {
	int sum = 0;
	for (int i = 1;i < Number;i++) {
		if (Number%i == 0) {
			sum += i;
		}
	}
	return Number == sum;
	}
void PrintResults(int Number)
{
	if (isPerfectNumber(Number))
		cout << Number << " Is Perfect Number.\n";
	else
		cout << Number << " Is NOT Perfect Number.\n";
}


int main()
{
	PrintResults(ReadPositiveNumber("Please enter a positive number?"));

}
