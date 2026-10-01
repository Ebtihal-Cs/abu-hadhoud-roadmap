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
        arr[i] = RandomNumber(1, 100);
    }
    cout << endl;
}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength;i++) {
        cout << arr[i] << " ";

    }
    cout << "\n";
}
short FindNumberPositionInArray(int Number, int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (Number == arr[i]) {
            return i;

        }
    }
    return -1;


}
bool IsNumberInArray(int Number, int arr[100], int arrLength) {
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
      
}
int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;
    return Number;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], Length;
    FillArrayWithRandomNumbers(arr, Length);
    cout << "\nArray Elements : ";
    PrintArray(arr, Length);
    int Number = ReadNumber();
    cout << "\nNumber you are looking for is: " << Number << endl;
    if (!IsNumberInArray(Number, arr, Length))
        cout << "No, The number is not found :-(\n";
    else
        cout << "Yes it is found :-)\n";
}
    