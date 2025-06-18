#include "module_2.h"

struct Dannye
{
    string familiya;
    int zarplata;
    int stazh;
    string polozhenie;
};

void poisk()
{
    ifstream fin("Assort.txt");
    ofstream fout("intermediate.txt");

    int kolvo = 0;
    string stroka;


    while (getline(fin, stroka))
    {
        kolvo++;
    }

    fin.clear();
    fin.seekg(0);

    Dannye* massiv = new Dannye[kolvo];

    for (int i = 0; i < kolvo; i++)
    {
        fin >> massiv[i].familiya >> massiv[i].zarplata >> massiv[i].stazh >> massiv[i].polozhenie;
    }

  
    int summa_zarplat = 0;
    for (int i = 0; i < kolvo; i++)
    {
        summa_zarplat += massiv[i].zarplata;
    }

    double srednyaya = static_cast<double>(summa_zarplat) / kolvo;

    cout << "\nСотрудники с зарплатой ниже средней (" << srednyaya << "):" << endl;
    fout << "Сотрудники с зарплатой ниже средней (" << srednyaya << "):" << endl;
    for (int i = 0; i < kolvo; i++)
    {
        if (massiv[i].zarplata < srednyaya)
        {
            cout << massiv[i].familiya << " " << massiv[i].zarplata << endl;
            fout << massiv[i].familiya << " " << massiv[i].zarplata << endl;
        }
    }

    cout << "\nСотрудники со стажем более 10 лет:" << endl;
    fout << "\nСотрудники со стажем более 10 лет:" << endl;
    for (int i = 0; i < kolvo; i++)
    {
        if (massiv[i].stazh > 10)
        {
            cout << massiv[i].familiya << " "
                << massiv[i].zarplata << " "
                << massiv[i].stazh << " "
                << massiv[i].polozhenie << endl;

            fout << massiv[i].familiya << " "
                << massiv[i].zarplata << " "
                << massiv[i].stazh << " "
                << massiv[i].polozhenie << endl;
        }
    }

    fin.close();
    fout.close();
    delete[] massiv;
}
