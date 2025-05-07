#include <iostream>
#include <cmath>

using namespace std;

double fu(double x)
{
    return pow((1.0 / 2), x) + 2 * x -4;
}

int main()
{
    float a = 0, b = 0, eMax = 0;
    cout << "Ingrese el dominio minimo: ";
    cin >> a;

    cout << "Ingrese el dominio maximo: ";
    cin >> b;

    cout << "Ingrese el error maximo: ";
    cin >> eMax;
    cout << endl;

    double ci, signo, e;

    do
    {
        ci = (a + b) / 2;
        cout << "a: " << a << "   b: " << b << "   c: " << ci << endl;

        signo = fu(a) * fu(ci);

        if(signo > 0) {
            a = ci;
        } else {
            b = ci;
        }

        e = (b - a) / 2;

    } while (e >= eMax);

    cout << "La raíz aproximada es: " << ci << endl;

    return 0;
}