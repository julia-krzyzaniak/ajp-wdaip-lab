#include <iostream>

using namespace std;

int main()

{
    float a, b;

    char f;


    do {
        cout << "Wybierz dzialanie \n Dodawanie + \n Odejmowanie - \n Mnozenie * \n Dzielenie /" << endl;
        cout << "Wybierz opcje: ";
        cin >> f;
        
        if (f == '0') {
            cout << endl << "Koniec programu" << endl;
            return 0;
        }

        cout << "Podaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;

        switch (f)

        {
        case '+':
            cout << endl << "Suma to: " << a + b << endl << endl;
            break;


        case '-':
            cout << endl << "Roznica to: " << a - b << endl << endl;
            break;

        case '*':
            cout << endl << "Iloczyn to: " << a * b << endl << endl;
            break;

        case '/':
            if (a == 0 || a == b) {
                cout << endl << "Nie dziel przez zero!" << endl << endl;
                break;
            }
            cout << endl << "Iloraz to: " << a / b << endl << endl;
            break;

        default:
            cout << "Blad" << endl << endl;
            break;
        }

    } while (f != '0');


    return 0;
}


