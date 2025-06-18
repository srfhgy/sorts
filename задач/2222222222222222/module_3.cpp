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

    cout << "\nРезультат сохранён в файл: result.txt" << endl;
}