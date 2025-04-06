#include <iostream>
using namespace std;

class Figuras {
public:
    static void cuadrado(int lado) {
        for (int i = 0; i < lado; i++) {
            for (int j = 0; j < lado; j++)
                cout << "* ";
            cout << endl;
        }
    }

    static void triangulo(int altura) {
        for (int i = 1; i <= altura; i++) {
            for (int j = 0; j < i; j++)
                cout << "* ";
            cout << endl;
        }
    }
};

void ejecutarFigurasGeometricas() {
    int opcion, tamano;
    cout << "Seleccione una figura:\n1. Cuadrado\n2. Triangulo\nOpcion: ";
    cin >> opcion;

    cout << "Ingrese el tamaño de su figura (sera proporcional): ";
    cin >> tamano;

    if (opcion == 1) Figuras::cuadrado(tamano);
    else if (opcion == 2) Figuras::triangulo(tamano);

}

