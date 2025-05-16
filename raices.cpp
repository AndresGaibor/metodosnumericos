#include <iostream>
#include <cmath>

using namespace std;

double fu(double x)
{
    return pow(x, 3) - 3 * pow(x, 2) + 1;
}

int main()
{
    double a = 0, b = 0, h = 0;
    cout << "Ingrese el dominio minimo: ";
    cin >> a;

    cout << "Ingrese el dominio maximo: ";
    cin >> b;

    cout << "Ingrese el paso de busqueda: ";
    cin >> h;
    cout << endl;

    double x0 = a, x1, signo;
    int numraices = 0;

    do
    {
        x1 = x0 + h;

        signo = fu(x0) * fu(x1);

        if (signo < 0)
        {
            cout << "Se encontro una raiz en " << ((x0 + x1) / 2) << " con un error maximo de " << h / 2 << endl;
            numraices++;
        }

        x0 = x1;

    } while (x0 < b);

    if (numraices == 0)
    {
        cout << "En el dominio [" << a << ", " << b << "] no se encontraron raices";
    }

    return 0;
}