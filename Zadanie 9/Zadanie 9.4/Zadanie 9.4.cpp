#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

void wzor(int l, char z) {

    for (int i = 0; i < l; i++) {
        cout << z;
    }
  
}

int main()
{
    int liczba = 1;
    char znak = 'a';
    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Podaj znak: ";
    cin >> znak;

    cout << endl << endl;

    wzor(liczba, znak);
}
