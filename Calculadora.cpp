#include <iostream>
using namespace std;

class Calculadora {
private:
    float num1, num2;

public:
    void ingresarNumeros() {
        cout << "\nIngrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
    }

    void sumar() {
        cout << "Resultado de la suma: " << num1 + num2 << endl;
    }

    void restar() {
        cout << "Resultado de la resta: " << num1 - num2 << endl;
    }

    void multiplicar() {
        cout << "Resultado de la multiplicacion: " << num1 * num2 << endl;
    }

    void dividir() {
        if (num2 != 0) {
            cout << "Resultado de la division: " << num1 / num2 << endl;
        } else {
            cout << "Error: No se puede dividir entre 0." << endl;
        }
    }
};

void ejecutarCalculadora() {
    Calculadora calc;
    int opcion;
    char continuar;

    do {
        cout << "\n=== Calculadora Basica ===\n";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            calc.ingresarNumeros();
        }

        switch (opcion) {
            case 1:
                calc.sumar();
                break;
            case 2:
                calc.restar();
                break;
            case 3:
                calc.multiplicar();
                break;
            case 4:
                calc.dividir();
                break;
            case 5:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion no válida. Intenta de nuevo.\n";
        }

        if (opcion != 5) {
            cout << "\n¿Quieres realizar otra operacion? (s/n): ";
            cin >> continuar;
        } else {
            continuar = 'n';
        }

    } while (continuar == 's' || continuar == 'S');
}

