#include <iostream>

using namespace std;

float suma = 0, srednia = 0;

float wczytaj() {

		float x = 0;
		ocena:
		cout << "Podaj ocene: ";
		cin >> x;
		if (x >= 1 && x <= 6) {
			return x;
		}
		else {
			cout << "Podaj ocene w zakresie od 1 do 6." << endl;;
			goto ocena;
		}
}

int main()
{	
	for (int i = 0; i < 5; i++) {

		suma = suma + wczytaj();
	}
	srednia = suma / 5;
	cout << "Srednia ocen to: " << srednia;
}
