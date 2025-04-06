#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class JuegoPPT {
public:
    void jugar() {
        int eleccionUsuario;
        int eleccionPC;

        cout << "\n--- Piedra, Papel o Tijeras ---\n";
        cout << "Elige una opcion:\n";
        cout << "1. Piedra\n";
        cout << "2. Papel\n";
        cout << "3. Tijeras\n";
        cout << "Tu eleccion: ";
        cin >> eleccionUsuario;

        // Generar la elección aleatoria de la computadora
        eleccionPC = 1 + rand() % 3;

        cout << "La computadora eligio: ";
        mostrarOpcion(eleccionPC);

        determinarGanador(eleccionUsuario, eleccionPC);
    }

private:
    void mostrarOpcion(int opcion) {
        if (opcion == 1) cout << "Piedra\n";
        else if (opcion == 2) cout << "Papel\n";
        else if (opcion == 3) cout << "Tijeras\n";
    }

    void determinarGanador(int usuario, int pc) {
        if (usuario == pc) {
            cout << "¡Empate!\n";
        } else if ((usuario == 1 && pc == 3) ||  // Piedra gana a tijeras
                   (usuario == 2 && pc == 1) ||  // Papel gana a piedra
                   (usuario == 3 && pc == 2)) {  // Tijeras gana a papel
            cout << "¡Ganaste!\n";
        } else {
            cout << "Perdiste\n";
        }
    }
};

int main() {
    // Inicializamos la semilla solo una vez
    srand(time(0));

    JuegoPPT juego;
    char repetir;

    do {
        juego.jugar();
        cout << "\n¿Quieres jugar otra vez? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');

    return 0;
}
