#include <iostream>

using namespace std;

int main()
{
    float a, b, w;
    
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    w = a * b;

    if (w > 100) {
        cout << "Wynik jest wiekszy od 100";
    }

    else if (w == 100) {
        cout << "Wynik jest rowny 100";
    }

    else if (w < 100) {
        cout << "Wynik jest mniejszy niz 100";
    }
}

