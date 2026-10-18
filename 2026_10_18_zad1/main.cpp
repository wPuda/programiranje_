#include <iostream>

using namespace std;

double prosjek(int prva, int druga) {
    double rezultat = (prva + druga) / 2.0;
    return rezultat;
}
int main() {
    int prvaOcjena = 0;
    int drugaOcjena = 0;
    std::cin >> prvaOcjena >> drugaOcjena;
    std::cout << prosjek(prvaOcjena, drugaOcjena);
}
