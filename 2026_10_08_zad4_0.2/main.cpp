#include <iostream>
#include <cstdio>
using namespace std;


bool ispravanUnos(int bodovi, int maksimalnoBodova);
double izracunajPostotak(int bodovi, int maksimalnoBodova);
int odrediOcjenu(double postotak);
void ispisiIzvjestaj(int bodovi, int maksimalnoBodova, double postotak, int ocjena);

int main() {
    int bodovi, maksimalnoBodova;

    cout << "Unesi ostvarene bodove: ";
    scanf("%i", &bodovi);

    cout << "Unesi maksimalan broj bodova: ";
    scanf("%i", &maksimalnoBodova);

    if (!ispravanUnos(bodovi, maksimalnoBodova)) {
        cout << "Pogreska: Neispravan unos bodova!" << endl;
        return 1;
    }


    double postotak = izracunajPostotak(bodovi, maksimalnoBodova);
    int ocjena = odrediOcjenu(postotak);


    ispisiIzvjestaj(bodovi, maksimalnoBodova, postotak, ocjena);

    return 0;
}


bool ispravanUnos(int bodovi, int maksimalnoBodova) {
    return (maksimalnoBodova > 0 && bodovi >= 0 && bodovi <= maksimalnoBodova);
}

double izracunajPostotak(int bodovi, int maksimalnoBodova) {
    return 100.0 * bodovi / maksimalnoBodova;
}

int odrediOcjenu(double postotak) {
    if (postotak < 50.0) return 1;
    else if (postotak < 65.0) return 2;
    else if (postotak < 80.0) return 3;
    else if (postotak < 90.0) return 4;
    else return 5;
}

void ispisiIzvjestaj(int bodovi, int maksimalnoBodova, double postotak, int ocjena) {
    cout << "Bodovi: " << bodovi << " / " << maksimalnoBodova << endl;
    cout << "Postotak: " << postotak << " %" << endl;
    cout << "Ocjena: " << ocjena << endl;
}
