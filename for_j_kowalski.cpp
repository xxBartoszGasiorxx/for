#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    for (int i = 21; i > 0; i--) {
        Sleep(1000);
        cout << i << endl;
    }
    cout << "Orzech";
    return 0; }