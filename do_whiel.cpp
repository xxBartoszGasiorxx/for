#include <iostream>
using namespace std;

int main() {
    int Miejscowosc_zamieszkania = 1;
    int minut = 0;

    do {
        minut++;
        Miejscowosc_zamieszkania = Miejscowosc_zamieszkania * 2;

        cout << "minelo minut: " << minut << endl;
        cout << "liczba bakterii: " << Miejscowosc_zamieszkania << endl;
    } while (Miejscowosc_zamieszkania <= 2100000000);

    return 0;