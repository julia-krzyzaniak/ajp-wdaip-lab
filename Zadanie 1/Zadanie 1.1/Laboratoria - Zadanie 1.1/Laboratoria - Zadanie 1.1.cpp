#define _USE_MATH_DEFINES

#include <iostream>
#include <climits>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	float a, b;
	
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Pole prostokata: " << a * b << endl;
	cout << "Obwod prostokata: " << 2 * a + 2 * b << endl;	
}
