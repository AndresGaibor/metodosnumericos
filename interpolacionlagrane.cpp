#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántas coordenadas rectangulares va a ingresar?: ";
    cin >> n;
    
    double x[n], y[n];
    
    cout << "Ingrese los valores de X:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "]: ";
        cin >> x[i];
    }

    cout << "Ingrese los valores de Y:\n";
    for (int i = 0; i < n; i++) {
        cout << "y[" << i << "]: ";
        cin >> y[i];
    }

    double x0;
    cout << "Ingrese el valor de x0 a proyectar: ";
    cin >> x0;

    double S = 0;
    for (int i = 0; i < n; i++) {
        double P = 1;
        for (int j = 0; j < n; j++) {
            if (j != i) {
                P *= (x0 - x[j]) / (x[i] - x[j]);
            }
        }
        S += y[i] * P;
    }

    cout << "La solución proyectada en 'x0' = " << x0 << " es: '" << S << "'" << endl;

    return 0;
}