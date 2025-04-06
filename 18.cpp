#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secreto = rand() % 100 + 1;
    int intento, contador = 0;

    cout << "Adivina el número (1-100): ";

    do {
        cin >> intento;
        contador++;

        if (intento > secreto) {
            cout << "Muy alto. Intenta de nuevo: ";
        } else if (intento < secreto) {
            cout << "Muy bajo. Intenta de nuevo: ";
        } else {
            cout << "¡Correcto! Lo lograste en " << contador << " intentos.\n";
        }
    } while (intento != secreto);

    return 0;
}
