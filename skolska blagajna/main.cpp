
#include <iostream>
#include <iomanip>
using namespace std;

// Globalne konstante
const double CIJENA_ULAZNICE = 5.0;
const int PRAG_POPUSTA = 5;
const double STOPA_POPUSTA = 0.10;

// Globalne varijable
int ukupnoUlaznica = 0;
double ukupniPrihod = 0.0;

// Deklaracije funkcija
bool ispravanUnos(int kolicina);
double izracunajIznos(int kolicina);
void evidentirajKupnju(int kolicina, double iznos);
void ispisiKupnju(int redniBroj, double iznos);
void ispisiSazetak();

// Glavni program
int main() {
    for (int i = 1; i <= 3; i++) {
        int kolicina;
        double iznos;

        do {
            cout << "Kupnja " << " - unesi broj ulaznica (1-30): ";

            cin >> kolicina;
        } while (!ispravanUnos(kolicina));

        iznos = izracunajIznos(kolicina);

        evidentirajKupnju(kolicina, iznos);

        ispisiKupnju(i, iznos);
    }

    ispisiSazetak();

    return 0;
}

// Definicije funkcija
bool ispravanUnos(int kolicina) {
    if (kolicina >= 1 && kolicina <= 30) {
        return true;
    } else {
        return false;
    }
}

double izracunajIznos(int kolicina) {
    double osnovniIznos = kolicina * CIJENA_ULAZNICE;
    double konacniIznos = osnovniIznos;

    if (kolicina >= PRAG_POPUSTA) {
        konacniIznos = osnovniIznos * (1 - STOPA_POPUSTA);
    }

    return konacniIznos;
}

void evidentirajKupnju(int kolicina, double iznos) {
    ukupnoUlaznica = ukupnoUlaznica + kolicina;
    ukupniPrihod = ukupniPrihod + iznos;
}

void ispisiKupnju(int redniBroj, double iznos) {
    cout << fixed << setprecision(2);
    cout << "Kupnja " << redniBroj << ": "
         << iznos << " EUR" << endl;
}

void ispisiSazetak() {
    cout << endl;
    cout << "Ukupno prodanih ulaznica: "
         << ukupnoUlaznica << endl;
    cout << fixed << setprecision(2);
    cout << "Ukupni prihod: "
         << ukupniPrihod << " EUR" << endl;
}
