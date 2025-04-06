#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string decimalAHexadecimal(int numero) {
    stringstream ss;
    ss << hex << uppercase << numero;
    return ss.str();
}

int main() {
    int numero;
    cout << "Ingrese un número decimal: ";
    cin >> numero;
    cout << "Hexadecimal: " << decimalAHexadecimal(numero) << endl;
    return 0;
}
