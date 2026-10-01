#include <iostream>   
#include <string>     
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

void PrintLetterPattern(int Number)
{
    cout << "\n";



    for (int i =65; i <=64+Number; i++)
    {

        for (int j = 1;  j <= i - 64; j++)
        {
            cout << char(i);
        }

        cout << "\n";
    }
}

int main()
{
    PrintLetterPattern(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}