#include<iostream>
#include<cstdlib>
using namespace std;
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
    case enCharType::SamallLetter : {
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
int main() {
    srand((unsigned)time(NULL));
    cout << GetRandomCharacter(enCharType::SamallLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;


}