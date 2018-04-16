// Tekstiniame faile duotas dvimatis masyvas, sudarytas ið n eiluciu ir m stulpeliu. Patikrinti, ar yra nors vienas stulpelis, kuriame visi elementai nuliai?

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    // sukursime duomenu faila ir ten irasysime dvimati masyva
    ofstream fv ("matrica.txt");
    srand(time(NULL));
    int a;
    int e, s;
    cout << "Kiek masyve eiluciu (<=50)? ";
    cin >> e;
    cout << "Kiek masyve stulpeliu (<=50)? ";
    cin >> s;

    //masyvo generaviams
    fv << e << "\t" << s << endl;
    for (int i=0; i<e; i++)
    {
        for (int j=0; j<s; j++)
        {
            a=rand()%2;
            fv << "\t" << a;
        }
        if (i!=e-1) fv << endl;
    }
        fv.close();
     system ("pause");
    return EXIT_SUCCESS;
}
