#include<iostream>
using namespace std;
void PrintAllFromAAAtoZZZ() {
	string word = "";
	cout << "\n";
	for (char i = 65;i <= 90;i++) {
		for (char j = 65;j <= 90;j++) {
			for (char y = 65;y <= 90;y++) {
				word.append(1, char(i));
				word.append(1, char(j));
				word.append(1, char(y));
				cout << word << endl;
				word = "";

			}
		}
		cout << "\n____________________________\n";

	}
}
int main() {
	PrintAllFromAAAtoZZZ();
}