#include <iostream>
using namespace std;

class NumeroALetras {
private:
    string unidades[10] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string decenas[10] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string especiales[10] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};

public:
    string convertir(int num) {
        if (num < 0 || num > 99) return "Numero fuera de rango";
        if (num < 10) return unidades[num];
        if (num < 20) return especiales[num - 10];
        if (num < 100) return decenas[num / 10] + (num % 10 != 0 ? " y " + unidades[num % 10] : "");
        return "Numero fuera de rango";  
    }
};

void ejecutarConversion() {
    int numero;
    cout << "Ingrese un numero (0-99): ";
    cin >> numero;

    if (numero < 0 || numero > 99) {
        cout << "Numero fuera de rango, ingrese un numero entre 0 y 99." << endl;
        return;
    }

    NumeroALetras conversor;
    cout << "En letras seria: " << conversor.convertir(numero) << endl;
}

