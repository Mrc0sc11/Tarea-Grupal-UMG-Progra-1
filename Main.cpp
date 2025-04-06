#include <iostream>
#include "Calculadora.cpp"      // Incluir el archivo que contiene la calculadora
#include "Palindromo.cpp"       // Incluir el archivo de palíndromo
#include "NumeroALetras.cpp"    // Incluir el archivo de convertir números a letras
#include "MultiplicacionGrafica.cpp"  // Incluir el archivo de multiplicación gráfica
#include "FigurasGeometricas.cpp"     // Incluir el archivo de figuras geométricas
#include "Hipotenusa.cpp"        // Incluir el archivo de calcular la hipotenusa
#include "PiedraPapelTijera.cpp" // Incluir el archivo del juego de piedra, papel o tijera

using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n==== Menu Principal ====\n";
        cout << "1. Calculadora\n";
        cout << "2. Palindromo\n";
        cout << "3. Convertir numeros a letras\n";
        cout << "4. Multiplicacion grafica\n";
        cout << "5. Figuras geometricas\n";
        cout << "6. Calcular la hipotenusa\n";
        cout << "7. Piedra, papel o tijera\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ejecutarCalculadora();
                break;
            case 2:
                ejecutarPalindromo();
                break;
            case 3:
                ejecutarConversion();
                break;
            case 4:
                ejecutarMultiplicacionGrafica();
                break;
            case 5:
                ejecutarFigurasGeometricas();
                break;
            case 6:
                ejecutarHipotenusa();
                break;
            case 7:
                ejecutarPiedraPapelTijera();
                break;
            case 0:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion no valida, intente nuevamente.\n";
        }

    } while (opcion != 0);

    return 0;
}

