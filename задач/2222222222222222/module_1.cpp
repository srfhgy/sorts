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
    cout << "������� ���������� �����������: ";
    cin >> kolvo;

    Dannye* massiv = new Dannye[kolvo];

    for (int i = 0; i < kolvo; i++)
    {
        cout << "\n��������� " << i + 1 << endl;
        cout << "�������: ";
        cin >> massiv[i].familiya;
        cout << "��������: ";
        cin >> massiv[i].zarplata;
        cout << "����: ";
        cin >> massiv[i].stazh;
        cout << "���������: ";
        cin >> massiv[i].polozhenie;

        fout << massiv[i].familiya << " "
            << massiv[i].zarplata << " "
            << massiv[i].stazh << " "
            << massiv[i].polozhenie << endl;
    }

    fout.close();
    delete[] massiv;
}



