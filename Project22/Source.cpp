#include<iostream>
#include<string>
#include <cstring>
#include<cctype>
using namespace std;
int determiner(char phrase[]);
void traslateToPiglatin(char phrase[50]);
int main() {

	char repeat;
	char phrase[50];
	do
	{
		char phrase[50] = { ' ' };

		cout << "Enter the word you want to translate to piglating" << endl;
		cin.getline(phrase, 50);
		traslateToPiglatin(phrase);
		cout << "If you want to enter another word press 'Y'" << endl;
		cin >> repeat;
		cin.ignore();
		cin.clear();
	} while (repeat == 'y' || repeat == 'Y');
	system("pause");
}

void traslateToPiglatin(char phrase[50]) {
	if (determiner(phrase) == 0) {
		cout << "The traslated version:  " << phrase << endl;

	}
	else if (determiner(phrase)==1)
	{
		for (int i = 3; i <= strlen(phrase); i++)
		{
			if (phrase[i] == '\0') {
				phrase[i] = 'a';
				phrase[i + 1] = 'y';
				phrase[i + 2] = '\0';
				cout << "The traslated version:  " << phrase << endl;
				break;
			}
		}
	}
	else if (determiner(phrase)==2)
	{
		for (int i = 3; i <= strlen(phrase); i++)
		{
			if (phrase[i] == '\0') {
				phrase[i] = phrase[0];
				phrase[0] = ' ';
				phrase[i + 1] = 'a';
				phrase[i + 2] = 'y';
				phrase[i + 3] = '\0';
				cout << "The traslated version:  " << phrase << endl;
				break;
			}
		}

	}
	else
	{
		cout << determiner(phrase) << " ---  The input is invalid  ---" << endl;
	}
}

int determiner(char phrase[]) {
	if (phrase[2] == '\0') {
		return 0;
	}
	else if (phrase[0] == 'a' || phrase[0] == 'e' || phrase[0] == 'i' || phrase[0] == 'o' || phrase[0] == 'u' || phrase[0] == 'A' ||
		phrase[0] == 'E' || phrase[0] == 'I' || phrase[0] == 'O' || phrase[0] == 'U')
	{
		return 1;
	}
	else if (phrase[0] == 'b' || phrase[0] == 'c' || phrase[0] == 'd' || phrase[0] == 'f' || phrase[0] == 'g' || phrase[0] == 'h' ||
		phrase[0] == 'j' || phrase[0] == 'k' || phrase[0] == 'l' || phrase[0] == 'm' || phrase[0] == 'n' || phrase[0] == 'p' || phrase[0] == 'q' ||
		phrase[0] == 'r' || phrase[0] == 's' || phrase[0] == 't' || phrase[0] == 'v' || phrase[0] == 'w' || phrase[0] == 'x' || phrase[0] == 'y' ||
		phrase[0] == 'z' || phrase[0] == 'B' || phrase[0] == 'C' || phrase[0] == 'D' || phrase[0] == 'F' || phrase[0] == 'G' || phrase[0] == 'H' ||
		phrase[0] == 'J' || phrase[0] == 'K' || phrase[0] == 'L' || phrase[0] == 'M' || phrase[0] == 'N' || phrase[0] == 'P' || phrase[0] == 'Q' ||
		phrase[0] == 'R' || phrase[0] == 'S' || phrase[0] == 'T' || phrase[0] == 'V' || phrase[0] == 'W' || phrase[0] == 'X' || phrase[0] == 'Y' ||
		phrase[0] == 'Z')
	{
		return 2;
	}
	else
	{
		return -1;
	}
}