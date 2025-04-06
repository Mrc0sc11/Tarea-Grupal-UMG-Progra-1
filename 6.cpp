#include <iostream>
using namespace std;

string convertirNumeroALetras(int numero) {
    string letras[] = {
        "cero", "uno", "dos", "tres", "cuatro",
        "cinco", "seis", "siete", "ocho", "nueve",
        "diez", "once", "doce", "trece", "catorce",
        "quince", "dieciséis", "diecisiete", "dieciocho",
        "diecinueve", "veinte"
    };

    if (numero >= 0 && numero <= 20) {
        return letras[numero];
    } else {
        return "Número fuera de rango";
    }
}

int main() {
    int numero;
    cout << "Ingrese un número entre 0 y 20: ";
    cin >> numero;
    cout << "En letras: " << convertirNumeroALetras(numero) << endl;
    return 0;
}
