#include <iostream>
using namespace std;

double saldo = 1000.00; // saldo inicial

void mostrarMenu() {
    cout << "\n--- Cajero Automático ---\n";
    cout << "1. Consultar saldo\n";
    cout << "2. Depositar dinero\n";
    cout << "3. Retirar dinero\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opción: ";
}

void consultarSaldo() {
    cout << "Saldo actual: Q" << saldo << endl;
}

void depositar() {
    double monto;
    cout << "Ingrese el monto a depositar: Q";
    cin >> monto;
    if (monto > 0) {
        saldo += monto;
        cout << "Depósito exitoso.\n";
    } else {
        cout << "Monto inválido.\n";
    }
}

void retirar() {
    double monto;
    cout << "Ingrese el monto a retirar: Q";
    cin >> monto;
    if (monto > 0 && monto <= saldo) {
        saldo -= monto;
        cout << "Retiro exitoso.\n";
    } else {
        cout << "Fondos insuficientes o monto inválido.\n";
    }
}

int main() {
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1: consultarSaldo(); break;
            case 2: depositar(); break;
            case 3: retirar(); break;
            case 4: cout << "Gracias por usar el cajero.\n"; break;
            default: cout << "Opción inválida.\n";
        }
    } while (opcion != 4);

    return 0;
}
