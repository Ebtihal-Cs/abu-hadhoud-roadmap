
#include <iostream>
#include<cstdlib>
using namespace std;
int ReadPositiveNumber(string Massege) {

    int num;
    do {
        cout << Massege;
        cin >> num;
    } while (num < 0);
    return num;

}
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
enum enCharType {
    SamallLetter = 1,    // Represents lowercase letters (ASCII 97 to 122).
    CapitalLetter = 2,   // Represents uppercase letters (ASCII 65 to 90).
    SpecialCharacter = 3,// Represents special characters (ASCII 33 to 47).
    Digit = 4            // Represents digits (ASCII 48 to 57).
};
char GetRandomCharacter(enCharType CharType) {
    switch (CharType) {
    case enCharType::SamallLetter: {
        return char(RandomNumber(97, 122));
        break;
    }
    case enCharType::CapitalLetter: {
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharacter: {
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit: {
        return char(RandomNumber(48, 57));
        break;
    }

                          return '0';


    }


}
string GenerateWord(enCharType charType, short Length) {
    string word;
    for (int i = 1;i <= Length;i++) {
        word = word + GetRandomCharacter(charType);
    }
    return word;
}
void PrintStringArray(string arr[100], short Length) {
    for (int i = 0;i < Length; i++) {
        cout << " Array [ " << i + 1 << " ] ";
        cout << arr[i] << endl;

    }

}
string GenrateKey() {
    string key = "";
    key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4);
    return key;




}
void FillArrayWithKeys(string arr[100], short Length) {
    for (int i = 0;i < Length;i++) {
        arr[i] = GenrateKey();
    }
}

int main()
{
    string arr[100];
    int arrLength = 0;
    srand((unsigned)time(NULL));
    arrLength = ReadPositiveNumber("Pleaes enter how many keys to generate? \n ");
    FillArrayWithKeys(arr, arrLength);
    PrintStringArray(arr, arrLength);
}
