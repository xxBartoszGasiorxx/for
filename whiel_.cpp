#include <iostream>
using namespace std;

int main() {
    int Miejscowosc_zamieszkania = 1;
    int minut = 0;

    while (Miejscowosc_zamieszkania <= 2100000000) {
        minut++;
        Miejscowosc_zamieszkania = Miejscowosc_zamieszkania * 2;

        cout << "minelo minut: " << minut << endl;
    }

    return 0;
}