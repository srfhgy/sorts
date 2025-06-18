#include "module_1.h"

struct Dannye
{
    string familiya;
    int zarplata;
    int stazh;
    string polozhenie;
};

void vvod()
{
    ofstream fout("Assort.txt");
    int kolvo;
    cout << "Введите количество сотрудников: ";
    cin >> kolvo;

    Dannye* massiv = new Dannye[kolvo];

    for (int i = 0; i < kolvo; i++)
    {
        cout << "\nСотрудник " << i + 1 << endl;
        cout << "Фамилия: ";
        cin >> massiv[i].familiya;
        cout << "Зарплата: ";
        cin >> massiv[i].zarplata;
        cout << "Стаж: ";
        cin >> massiv[i].stazh;
        cout << "Должность: ";
        cin >> massiv[i].polozhenie;

        fout << massiv[i].familiya << " "
            << massiv[i].zarplata << " "
            << massiv[i].stazh << " "
            << massiv[i].polozhenie << endl;
    }

    fout.close();
    delete[] massiv;
}



