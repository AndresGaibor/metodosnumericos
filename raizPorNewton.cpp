#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Función f(x) = ln(x) + x - 3
double f(double x) {
    return pow(x, 3)  - 3 * pow(x, 2) + 1;  // log(x) es el logaritmo natural
}

// Derivada aproximada usando método centrado
double derivadaAproximada(double x) {
    double h = 0.0001;
    return (f(x + h) - f(x - h)) / (2 * h);  // Derivada centrada para mayor precisión
}

void metodoNewton(double x0, double errorMax) {
    double x1, df, error;
    int contador = 0;

    cout << fixed << setprecision(4);  // 4 decimales para mayor claridad

    do {
        df = derivadaAproximada(x0);  // Calcula la derivada aproximada
        cout << "La derivada aproximada de " << x0 << " es " << df << endl;
        if (df == 0) {
            cout << "Error: la derivada es cero. No se puede continuar." << endl;
            return;
        }

        x1 = x0 - f(x0) / df;  // Método de Newton
        error = fabs(x1 - x0);  // Calcula el error absoluto

        // cout << "Iteración " << contador + 1 << ": x = " << x1 << ", error = " << error << endl;

        x0 = x1;  // Actualiza el valor de x0
        contador++;

    } while (error > errorMax && contador <= 15);  // Repite hasta que el error sea menor que el error máximo permitido

    if(contador >= 15 ) {
        cout << "Se han hecho 15 iteraciones y no se encontro raiz: " << x1 << endl;  // Muestra la raíz final
    } else {
        cout << "Raíz aproximada encontrada: " << x1 << endl;  // Muestra la raíz final
    }
}

int main() {
    double x0, errorMax;

    // Solicita al usuario los valores de entrada
    cout << "Ingrese el valor inicial (x0): ";
    cin >> x0;

    
    errorMax = 0.0001;

    metodoNewton(x0, errorMax);  // Llama al método de Newton con los parámetros dados

    return 0;
}