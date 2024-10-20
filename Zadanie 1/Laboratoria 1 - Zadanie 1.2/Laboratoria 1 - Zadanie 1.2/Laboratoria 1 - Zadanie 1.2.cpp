#define _USE_MATH_DEFINES

#include <iostream>
#include <climits>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	float r;
	
	cout << "Podaj promien: ";
	cin >> r;
	cout << "Pole kola: " << M_PI * pow(r, 2) << endl;
	cout << "Obwod kola: " << 2 * M_PI * r << endl;
		
	}

