#include <iostream>

using namespace std;

int main()
{
	int tab[8];
	int i, suma;
	float srednia = 0;

	cout << "Program obliczajacy sume i srednie 8 elementow tablicy jednowymiarowej.\n";

	for (i = 0; i < 8; i++)
	{
		cout << "Podaj liczbe: ";
		cin >> tab[i];
	}

	for (i = 0; i < 8; i++)
	{
		cout << tab[i] << " ";
	}

	for (i = 0, suma = 0; i < 8; i++)

		suma = suma + tab[i];
		srednia = suma / 8;

	cout << endl << endl << "Suma wynosi: " << suma << "\n";
	cout <<"Srednia wynosi: " << srednia << "\n";
}
