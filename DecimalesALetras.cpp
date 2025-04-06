#include <iostream>
using namespace std;

class NumeroALetras {
private:
    string unidades[10] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string decenas[10] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string especiales[10] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};

public:
    string convertir(int num) {
        if (num < 10) return unidades[num];
        if (num < 20) return especiales[num - 10];
        if (num < 100) return decenas[num / 10] + (num % 10 != 0 ? " y " + unidades[num % 10] : "");
        return "Numero fuera de rango";
    }
};

int main() {
    int numero;
    cout << "Ingrese un numero (0-99): ";
    cin >> numero;

    NumeroALetras conversor;
    cout << "En letras seria: " << conversor.convertir(numero) << endl;

    return 0;
}
