#include <iostream>
#include<cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {

    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(-100, 100);
    }
    cout << endl;
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength;i++) {
        cout << arr[i] << " ";

    }
    cout << "\n";
}
int NegativeCount(int arr[100], int arrLength)
{
    int counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] < 0)
        {
             counter++;
        }
    }
    return counter;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], Length;
    FillArrayWithRandomNumbers(arr, Length);
    cout << "\nArray Elements : ";
    PrintArray(arr, Length);
    cout << "\nEven numbers count is : ";
    cout << NegativeCount(arr, Length);
}

