#include <iostream>

using namespace std;

int suma_cyfr(int liczba) {
	int wynik = 0;

	do {
		wynik = wynik + liczba % 10;
		liczba = liczba / 10;
	} while (liczba != 0);
	
	return wynik;
}

int main()
{
	int liczba;

	cout << "Program obliczajacy sume cyfr" << endl << endl;
	cout << "Podaj cyfry: ";
	cin >> liczba;
	cout << "Suma cyfr to: " << suma_cyfr(liczba);
   
}


