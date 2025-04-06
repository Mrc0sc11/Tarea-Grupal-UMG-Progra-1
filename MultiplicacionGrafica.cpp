#include <iostream>
#include <iomanip>
using namespace std;

class MultiplicacionManual {
public:
    static void mostrarMultiplicacion(int num1, int num2) {
        cout << setw(5) << num1 << endl;
        cout << " x" << setw(3) << num2 << endl;
        cout << "------" << endl;

        int dig1 = num2 % 10;
        int dig2 = num2 / 10;

        cout << setw(6) << num1 * dig1 << endl;
        cout << setw(5) << (num1 * dig2) << " " << endl;
        cout << "------" << endl;
        cout << setw(6) << num1 * num2 << endl;
    }
};

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    MultiplicacionManual::mostrarMultiplicacion(a, b);

    return 0;
}

