#include <iostream>

using namespace std;

int main()
{
	int liczba = 0, suma = 0, w = 0;

	cout << "Podaj liczbe: ";
	cin >> liczba;

	while (suma < 1000) 
	{
		suma = liczba * w;
		w++;
		cout << w << " Wielokrtonosc liczby "<< liczba << " to:" << suma << endl;
	}
}
