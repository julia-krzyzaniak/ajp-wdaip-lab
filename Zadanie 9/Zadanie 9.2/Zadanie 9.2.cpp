#include <iostream>

using namespace std;

int dodawanie(int a, int b) {
    int suma;
    suma = a + b;
    return suma;
}

int main()
{
    int c, d;
    
    cout << "Podaj pierwsza liczbe: ";
    cin >> c;
    
    cout << "Podaj druga liczbe liczbe: ";
    cin >> d;

    cout << endl << "Wynik dodawania to: " << dodawanie(c, d);

}
