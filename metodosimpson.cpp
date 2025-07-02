#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
	// e^x donde es euler
	return exp(x);
}

double simpson(double a, double b, int n) {
	double aux = 0;
	double l1 = a;
	double l2 = b / n;
	int j = 1;

	for (int i = 0; i < n; i++) {
		l2 = b / n * (i + 1);
		double h = (l2 - l1) / 6;

		double sum = f(l1) + 4 * f((l1 + l2) / 2) + f(l2);

		aux += sum * h;

		l1 = l2;
	}

	return aux;
}

int main() {
	cout << "Dominio de la integral:" << endl;
	double a, b;
	cout << "Ingrese el valor de a: ";
	cin >> a;
	cout << "Ingrese el valor de b: ";
	cin >> b;
	int n;

	cout << "En cuantos puntos desea abrir la integral? ";
	cin >> n;

	double resultado = simpson(a, b, n);
	cout << "El resultado de la integral es: " << resultado << endl;
	return 0;
}