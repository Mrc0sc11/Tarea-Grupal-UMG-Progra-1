#include <iostream>
#include <string>
#include <algorithm> // Incluir para usar reverse

using namespace std;

void ejecutarPalindromo() {
    string palabra;
    cout << "Ingrese una palabra o numero para verificar si es un palindromo: ";
    cin >> palabra;

    string palabraReversa = palabra;
    reverse(palabraReversa.begin(), palabraReversa.end()); // Función reverse corregida

    if (palabra == palabraReversa) {
        cout << palabra << " es un palindromo." << endl;
    } else {
        cout << palabra << " no es un palindromo." << endl;
    }
}

