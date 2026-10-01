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
void CopyArray(int arrCopy[100], int arr[100], int& arrLength) {
    for (int i = 0; i < arrLength;i++) {
        arr[i] = arrCopy[i];

    }
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100], Length,arrCopy[100];
    FillArrayWithRandomNumbers(arr, Length);
    int arr2[100];
    CopyArray(arr, arr2, Length);
    cout << "\nArray Elements : ";
    PrintArray(arr, Length);
    cout << "\nArray2 Elements : ";
    PrintArray(arr2, Length);

  
}

