#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int a, b, wynik, lwp = 0, po = 0;
	char odpowiedz;

	srand(time(NULL));

	do {
		a = rand() % 11;
		cout << endl << "Pierwsza liczba: "<< a << endl;

		b = rand() % 11;
		cout << "Druga Liczba: " << b << endl;

		cout << "Oblicz wynik: ";
		cin >> wynik;

		if (a * b == wynik) {
			
			cout << endl << "Poprawnie" << endl;
			po = po++;
		}
	
		else
			cout << endl << "Niepoprawnie" << endl;

		lwp = lwp++;


		cout << endl<< "Czy chcesz kontynuowac? Wcisnij t/n : ";
		cin >> odpowiedz;
	} 
	while (odpowiedz == 't');


	cout << endl << "Liczba wykonanych prob: " <<lwp<<endl;
	cout << "Poprawne odpowiedzi: "<< po << endl;

}

