#include <string>
#include <fstream>
#include <iostream>
#include "Quiz.h"
#include "tel.h"
#include <Windows.h>
using namespace std;
//
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//write


//	ofstream file("text.txt");
//	if (!file) {
//		cout << "file is not created";
//		return 1;
//	}
//	cout << "enter the text(* to break)";
//	char txt[25];
//	int row = 1;
//	do {
//		cout << row << ') ';
//		cin.getline(txt,25);
//		row++;
//		file << txt << endl;
//	} while (*txt != '*');

	//dowrite

	/*ofstream file("text.txt", ios::app);
	cout << "enter the text(* to break)"<<endl;
		char txt[25];
		int row = 1;
		while (*txt != '*') {
			cout << row << ") ";
			cin.getline(txt,25);
			row++;
			file << txt << endl;
		}
		file.close();*/

		//read

		/*ifstream file("text.txt");
		if (!file.is_open()) {
			cout << "No this file";
		}
		char txt[25];
		do {
			file.getline(txt, 25);
			cout << txt << endl;
		} while (file);
		file.close;
		*/


		//read-write


	//	ifstream fRead("text.txt");
	//	ofstream fWrite("textwriten.txt");
	//	short  len;
	//	cout << "Size";
	//	cin >> len;
	//	string words;
	//	while (fRead >> words) {
	//		if (words.size() >= len) {
	//			fWrite << words << endl;
	//		}
	//	}
	//	fRead.close();
	//	fWrite.close();
	//}
	//

	/*ifstream file("text.txt");
	if (!file) {
		cout << "File is not find";
		return 1;
	}
	short count = 0;
	char symbol;
	string words;
	cout << "Enter the symbol: " << endl;
	cin >> symbol;
	while (file >> words) {
		if (words[0] == symbol) {
			cout << words << ' ';
			count++;
		}
	}
	file.close();
	cout << count;*/

	//header files

	cout << "\tMenu\n1)Victorina\n2)Tel Book\n";
	short choise, res;
	cin >> choise;
	switch (choise)
	{
	case 1:
		res = quiz();
		break;
	case 2:
		res = tel();
		break;
	default:
		cout << "Error):";
		break;
	}


	//ifstream file("text.txt");
	//if (!file) {
	//	cout << "File is not find";
	//	return 1;
	//}
	
}