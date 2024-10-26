#include <iostream>
#include <fstream>
#include "file.h"
#include <Windows.h>
#include <string>
using namespace std;
//

int quiz()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    cout << "Quiz" << endl;
    ifstream file("quiz.txt");
    if (!file) {
        cout << "Error):";
        return 1;
    }
    short count = 1;
    string line;
    while (getline(file, line)) {
        cout << "Question " << count << ") ";
        cout << line << endl;  

        
        for (int i = 1; i <= 3; i++) {
            getline(file, line);
            cout << i << ") " << line << endl;
        }

        cout << "Your answer: ";
        string answer;
        cin >> answer;

        
        string correctAnswer;
        file >> correctAnswer;
        file.ignore();  

        if (answer == correctAnswer) {
            cout << "Correct!" << endl;
        }
        else {
            cout << "Incorrect!"<< endl;
        }
        count++;
    }

    file.close();
	cout << "\n1)Back to menu\n2)Exit\n";
	short choise, res;
	cin >> choise;
	if (choise == 1) {
		res = main();
	}
	else if (choise == 2) {
		exit;
	}
	else {
		cout << "Error";
	}
	return 0;
}