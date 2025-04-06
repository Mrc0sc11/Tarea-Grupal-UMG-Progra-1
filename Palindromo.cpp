#include <iostream>
#include <algorithm>
using namespace std;

class Palindromo {
public:
    static bool esPalindromo(string str) {
        string original = str;
        reverse(str.begin(), str.end());
        return original == str;
    }
};

int main() {
    string texto;
    cout << "Ingrese una palabra o numero: ";
    cin >> texto;

    if (Palindromo::esPalindromo(texto))
        cout << "Es un palindromo" << endl;
    else
        cout << "No es un palindromo" << endl;

    return 0;
}

