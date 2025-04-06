#include <iostream>
#include <cmath>
using namespace std;

class Triangulo {
private:
    double cateto1, cateto2;
public:
    Triangulo(double a, double b) : cateto1(a), cateto2(b) {}

    double calcularHipotenusa() {
        return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    }
};

void ejecutarHipotenusa() {
    double c1, c2;
    cout << "Ingrese los dos catetos, uno luego del otro: ";
    cin >> c1 >> c2;

    Triangulo t(c1, c2);
    cout << "Hipotenusa: " << t.calcularHipotenusa() << endl;

}

