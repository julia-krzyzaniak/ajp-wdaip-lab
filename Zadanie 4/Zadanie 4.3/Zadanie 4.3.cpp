#include <iostream>

using namespace std;

int main()

{
	int p, i = 0;
	double rachunek = 0, wplata = 0, reszta = 0;
	double nominal[] = { 200, 100, 50, 20, 10, 5, 2, 1, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01};


	cout << "Podaj kwote rachunku: ";
	cin >> rachunek;

	cout << "Podaj kwote wplaty: ";
	cin >> wplata;

	reszta = wplata - rachunek;
	
	while (reszta > 0.01) 
	{
		if (reszta >= nominal[i]) 
		{
			p = reszta / nominal[i];

			reszta = reszta - (nominal[i] * p);
			cout << "Reszta: " << nominal[i] << " zl x " << p << endl;
		}
		i++;
	}
	

	return 0;
}


