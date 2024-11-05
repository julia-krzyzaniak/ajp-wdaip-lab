#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, suma = 0, f;

	cout << "Podaj liczbe: ";
	cin >> a;
	cout << endl;
	cout << endl;
	cout << "     M E N U   " << endl;
	cout << endl;
	cout << "1 - parzystosc" << endl;
	cout << "2 - podzielnosc" << endl;
	cout << "3 - dzielniki" << endl;
	cout << "4 - liczba doskonala" << endl;
	cout << "5 - koniec" << endl;
	cout << endl;
	cout << "Wybierz opcje: ";
	cin >> f;

	cout << endl;
	cout << endl;

	switch (f)
	{
	case 1:
		if (a % 2 == 0)
			cout << "Liczba " << a << " jest liczba parzysta" << endl;
		else
			cout << "Liczba " << a << " nie jest liczba parzysta" << endl;
		break;

	case 2:
		cout << "Podaj liczbe, ktora chcesz podzielic: ";
		cin >> b;
		cout << endl;
		if (a % b == 0)
			cout << "Liczba " << a << " jest podzielna przez " << b << endl;
		else
			cout << "Liczba " << a << " nie jest podzielna przez " << b << endl;
		break;
	
	case 3:
		for (int i = 1; i <= a; i++) {
			if (a % i == 0) 
			{
				cout << "Dzielniki liczby " << a << " to: " << i << endl;
			}
		}

		cout << endl;

		for (int i = 2; (i * i) <= a; i++) {

			if (a % i == 0)
			{
				cout << "Liczba " << a << " nie jest liczba pierwsza" << endl;
			}
			else 
			{
				cout << "Liczba " << a << " jest liczba pierwsza" << endl;
			}
		}
			break;

	case 4:
		for (int i = 1; i <= a; i++) {
			if (a % i == 0) 
			{
				cout << "Dzielniki liczby " << a << " to: " << i << endl;
			}
		}
		cout << endl;

		for (int i = 1; i <= (a / 2); i++)
		{
			if (a % i == 0)
			{
				suma = suma + i;
			}
		}

		if (suma == a && a > 0)
			cout << "Liczba " << a << " jest doskonala" << endl;
		else
			cout << "Liczba " << a << " nie jest doskonala" << endl;

		break;

	case 5:
		cout << "Koniec programu!" << endl;
		break;
	}
	return 0;
}
