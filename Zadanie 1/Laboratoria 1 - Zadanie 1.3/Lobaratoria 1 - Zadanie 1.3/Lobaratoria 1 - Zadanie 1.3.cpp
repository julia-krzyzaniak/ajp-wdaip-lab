#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{
    float a, b, w;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    w = pow(a, 3) - 0.5 * pow(b, 4);

    cout << "Wynik = " << w << endl;;

}

