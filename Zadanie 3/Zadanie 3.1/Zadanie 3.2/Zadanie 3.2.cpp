#include <iostream>

using namespace std;

int main()
{
	int a, ujemne = 0; 

	do {
		cout << "Podaj liczbe: ";
		cin >> a;
		if (a < 0) ujemne++;
	} 
	while (a != 0);

	{
		cout << "Koniec!" << endl;
	} 

	cout << "Ilosc liczb ujemnych: " << ujemne;
}

