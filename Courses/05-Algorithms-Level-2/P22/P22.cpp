
#include <iostream>
using namespace std;
int ReadPositiveNumber(string Massege) {

    int num;
    do {
        cout << Massege;
        cin >> num;
    } while (num < 0);
    return num;

}
void ReadArray(int arr[100], int& arrLength) {
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++) {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength;i++) {
        cout << arr[i]<<" ";
        
    }
    cout << "\n";
}
int TimesRepeated(int Number, int arr[100], int arrLength) {
    int counter = 0;
    for (int i = 0;i < arrLength;i++) {
        if (Number == arr[i])
            counter++;
    }
    return counter;

}

int main()
{
    int arr[100], Length, NumberToCheck;
    ReadArray(arr, Length);
    NumberToCheck=ReadPositiveNumber("Enter the number you want to check: ");
    cout << "\nOriginal Array : ";
    PrintArray(arr, Length);
    cout << TimesRepeated(NumberToCheck,arr, Length)<<" Times";
}

