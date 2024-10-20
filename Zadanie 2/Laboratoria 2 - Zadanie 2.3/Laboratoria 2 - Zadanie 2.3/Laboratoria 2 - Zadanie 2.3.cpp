#include <iostream>

using namespace std;

int main()

{
    float a, b;

    int f;

    cout << "Wybierz dzialanie \n 1. Dodawanie \n 2. Odejmowanie \n 3. Mnozenie \n 4. Dzielenie"<<endl;
    cout << "Wybierz opcje: ";
    cin >> f;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    switch (f)
    {
    case 1:
        cout << "Suma to: " << a + b;
        break;

    case 2:
        cout << "Roznica to: " << a - b;
        break;

    case 3:
        cout << "Iloczyn to: " << a * b;
        break;

    case 4:
        if (a == 0 || a == b) {
            cout << "Nie dziel przez zero!";
            break;
        }
        cout << "Iloraz to: " << a / b;
        break;

    default:
        cout << "Blad";
        break;
    }
}


