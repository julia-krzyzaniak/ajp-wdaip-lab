﻿#include <iostream>

using namespace std;

int main()
{
    int dzien;

    cout << "Wpisz liczbe w zakresie 1-7: ";
    cin >> dzien;

    switch (dzien) {
    
        case 1: 
            cout << "Poniedzialek";
            break;


        case 2:
            cout << "Wtorek";
            break;


        case 3:
            cout << "Sroda";
            break;


        case 4:
            cout << "Czwartek";
            break;

        case 5:
            cout << "Piatek";
            break;

        case 6:
            cout << "Sobota";
            break;
          
        case 7:
            cout << "Niedziela";
            break;

        default:
            cout << "Blad";
            break;

    }

}

