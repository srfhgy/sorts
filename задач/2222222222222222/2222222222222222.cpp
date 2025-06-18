#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "module_1.h"
#include "module_2.h"
#include "module_3.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);           
    SetConsoleOutputCP(1251);     
    int vybor = 0;

    while (vybor != 4)
    {
        cout << endl;
        cout << "1 - Ввод данных" << endl;
        cout << "2 - Поиск по условию" << endl;
        cout << "3 - Сохранение результата" << endl;
        cout << "4 - Выход" << endl;
        cout << "Выберите действие: ";
        cin >> vybor;

        switch (vybor)
        {
        case 1:
            vvod();
            break;
        case 2:
            poisk();
            break;
        case 3:
            sohranit();
            break;
        case 4:
            cout << "\nВыход из программы..." << endl;
            break;
        default:
            cout << "\nОшибка: введите число от 1 до 4" << endl;
            break;
        }
    }

    system("pause");
    return 0;
}

