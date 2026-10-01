#include <iostream> 
#include <cstdlib> 

using namespace std;



int RandomNumber(int From, int To)
{

	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}


void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;  

	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		arrDestination[i] = arrSource[arrLength - 1 - i];
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}



int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);
	CopyArrayInReverseOrder(arr, arr2, arrLength);

	cout << "\nArray elements before shuffle:\n";
	PrintArray(arr, arrLength);


	cout << "\nArray elements after shuffle:\n";
	PrintArray(arr2, arrLength);



	return 0;

}