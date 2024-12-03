#include <iostream>
#include <math.h>

using namespace std;

float pole(float bok) {
	return  pow(bok, 2);
}

float pole(float bok1, float bok2) {
	return  bok1 * bok2;
}

int main()
{
	int f;
	float a = 0, b = 0;


	do {
		cout << "Wybierz figure, ktorej chcesz obliczyc pole: " << endl;
		cout << "1 - Kwadrat" << endl;
		cout << "2 - Prostokat" << endl;
		cout << "0 - Koniec programu" << endl;
		cout << endl << "Wybierz opcje: ";
		cin >> f;

		if (f == 1) {
			cout << "Podaj bok a: ";
			cin >> a;
			cout << "Pole kwadratu to: " << pole(a) << endl << endl;
		}

		if (f == 2) {
			cout << "Podaj bok a: ";
			cin >> a;
			cout << "Podaj bok b: ";
			cin >> b;
			cout << "Pole kwadratu to: " << pole(a, b) << endl << endl;
		}

	} while (f != 0);


}

