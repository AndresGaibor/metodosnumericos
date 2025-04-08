#include <iostream>
#include <cmath>

using namespace std;

float formulaGeneral(float a, float b, float c);

int main() {
    cout << "Hola";
    float a, b, c;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    formulaGeneral(a, b, c);
    return 0;
}

float formulaGeneral(float a, float b, float c) {
    float discriminante = b * b - 4 * a * c;
    if (discriminante < 0) {
        cout << "No hay soluciones reales" << endl;
        return 0;
    }
    float x1 = (-b + sqrt(discriminante)) / (2 * a);
    float x2 = (-b - sqrt(discriminante)) / (2 * a);
    cout << "Las soluciones son: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    return 0;
}