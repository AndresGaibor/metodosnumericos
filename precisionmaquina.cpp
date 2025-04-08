#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x = 1, z = 2, contador = 0;

    while(z > 1) {
        x = x/2;
        z = 1 + x;
        contador++;
    }

    cout << "La presicion es: " << x << endl;
    cout << "Cantidad de ciclos es: " << contador << endl;

    return 0;
}