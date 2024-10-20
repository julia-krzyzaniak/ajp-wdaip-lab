#define _USE_MATH_DEFINES

#include <iostream>
#include <climits>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	float a, b, h, r;
	int f;

	cout << "*******************"<<endl;
	cout << endl;
	cout << "  Wybierz figure: " << endl;
	cout << endl;
	cout << "*******************" << endl;
	cout << endl;
	cout<< " 1. Kwadrat \n 2. Prostokat \n 3. Kolo \n 4. Trapez \n ";
	cout << endl;
	cout << "Wybierz figure: ";
	cin >> f;
	cout << endl;
	if (f == 1) {
		cout << "Podaj liczbe: ";
		cin >> a;
		cout << endl;
		cout << "Pole kwadratu: " << pow(a, 2) << endl;
	}

	else if (f == 2)
	{
		cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe: ";
		cin >> b;
		cout << endl;
		cout << "Pole prostokata: " << a * b << endl;
	}

	else if (f == 3)
	{
		cout << "Podaj promien: ";
		cin >> r;
		cout << endl;
		cout << "Pole kola w centymetrach [cm^2]: " << M_PI * pow(r, 2) << endl;
	}

	else if (f == 4)
	{
		cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe: ";
		cin >> b;
		cout << "Podaj wysokosc: ";
		cin >> h;
		cout << endl;
		cout << "Pole trapezu: " << (a + b) * h /2 << endl;
	}

	else {
		cout << "Blad" << endl;
	}

}