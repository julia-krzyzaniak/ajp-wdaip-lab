#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float a, b, c, delta;
    
    cout << "Podaj a: ";
    cin >> a;

    cout << "Podaj b: ";
    cin >> b;

    cout << "Podaj c: ";
    cin >> c;
    cout << endl;

    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0) {
        cout << "Rownanie ma dwa rozwiazania: " << endl;
        cout << "x1 = " << (-b - sqrt(delta)) / 2 * a << endl;
        cout << "x2 = " << (-b + sqrt(delta)) / 2 * a << endl;
    }

    else if (delta == 0) {
        cout << "Rownanie ma jedno rozwiazanie: " << endl;
        cout << "x = " << -b / 2 * a << endl;
    }

    else if (delta < 0) {

        cout << "To rownanie kwadratowe nie ma rozwiazan" << endl;
    }

    else {
        cout << "Blad" << endl;
    }

}
