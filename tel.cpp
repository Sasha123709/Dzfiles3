#include <iostream>
#include <fstream>
#include <Windows.h>
#include "file.h"
using namespace std;

struct telbook {
    string name;
    int phone;
};

void readtetx(telbook tb[], int& count) {
    ifstream file("contact.txt");
    count = 0; 
    while (file >> tb[count].name >> tb[count].phone) {
        count++;
    }
    file.close();
}

void show(telbook tb[], int count) {
    for (int i = 0; i < count; i++) {
        cout << tb[i].name << " " << tb[i].phone << endl;
    }
}

void add_tel(telbook tb[], int& count) {
    if (count < 10) {
        cout << "Введіть ім'я: ";
        cin >> tb[count].name;
        cout << "Введіть номер телефону: ";
        cin >> tb[count].phone;
        count++;

        
        ofstream file("contact.txt", ios::app);
        file << tb[count - 1].name << " " << tb[count - 1].phone << endl;
        file.close();

        cout << "Контакт додано!" << endl;
    }
}

void change_tel(telbook tb[], int count) {
    string name;
    cout << "Введіть ім'я контакту, який потрібно змінити: ";
    cin >> name;

    for (int i = 0; i < count; i++) {
        if (tb[i].name == name) {
            cout << "Введіть новий номер телефону: ";
            cin >> tb[i].phone;

            
            ofstream file("contact.txt");
            for (int j = 0; j < count; j++) {
                file << tb[j].name << " " << tb[j].phone << endl;
            }
            file.close();

  
        }
    }
   
}

void find_tel(telbook tb[], int count) {
    string name;
    cout << "Введіть ім'я контакту для пошуку: ";
    cin >> name;

    for (int i = 0; i < count; i++) {
        if (tb[i].name == name) {
            cout << "Контакт знайдено: " << tb[i].name << " " << tb[i].phone << endl;
            return;
        }
    }
    cout << "Контакт не знайдено." << endl;
}

int tel() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Phone Book";

    while (true) {
        telbook tb[10];
        int size = 0;
        readtetx(tb, size);

        cout << "\n1) Show tel\n2) Add tel\n3) Change tel\n4) Find tel\n5) Exit\n";
        int contact;
        cin >> contact;

        switch (contact) {
        case 1:
            show(tb, size);
            break;
        case 2:
            add_tel(tb, size);
            break;
        case 3:
            change_tel(tb, size);
            break;
        case 4:
            find_tel(tb, size);
            break;
        case 5:
            return 0; 
        default:
            cout << "Невірний вибір. Спробуйте ще раз." << endl;
            break;
        }
    }
    return 0;
}
