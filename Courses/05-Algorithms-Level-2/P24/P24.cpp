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
int MaxNumber(int arr[100], int arrLength) {
    int Max = 0;
    for (int i = 0; i < arrLength;i++) {
        if (Max < arr[i]) {
            Max = arr[i];
        }
        

    }
    return Max;
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength;i++) {
        cout << arr[i] << " ";

    }
    cout << "\n";
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], Length;
    FillArrayWithRandomNumbers(arr, Length);
    cout << "\nArray Elements : ";
    PrintArray(arr, Length);
    cout << "\nMax Number Is : ";
   cout<< MaxNumber(arr, Length);
}

