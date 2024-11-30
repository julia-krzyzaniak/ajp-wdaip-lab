#include <iostream>

using namespace std;

int max(int a, int b) {
    
    if (a > b)
        return a;
    
    return b;
}

int main()
{
    int c, d;

    cout << "Podaj pierwsza liczbe: ";
    cin >> c;

    cout << "Podaj druga liczbe liczbe: ";
    cin >> d;

    cout << endl << "Wieksza liczba jest: " << max(c, d);
}
