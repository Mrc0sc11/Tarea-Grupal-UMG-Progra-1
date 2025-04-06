#include <iostream>
using namespace std;

void mostrarTablas() {
    for (int i = 1; i <= 10; i++) {
        cout << "Tabla del " << i << ":\n";
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << "-------------------\n";
    }
}

int main() {
    mostrarTablas();
    return 0;
}
