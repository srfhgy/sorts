#include "module_3.h"

void sohranit()
{
    ifstream vhod("intermediate.txt");
    ofstream vyhod("result.txt");
    string bufer;

    while (getline(vhod, bufer))
    {
        vyhod << bufer << endl;
    }

    vhod.close();
    vyhod.close();

    cout << "\n��������� ������� � ����: result.txt" << endl;
}