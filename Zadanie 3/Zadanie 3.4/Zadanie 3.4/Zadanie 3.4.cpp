#include <iostream>

using namespace std;

int main()
{
	int a, min, max;

 
	cout << "Podaj liczbe: ";
	cin >> a;

	min = a;
	max = a;
	
	while (a != 0)
		{
			if (a > max) 
				max = a;

			if (a < min)
				min = a;

			cout << "Podaj liczbe: ";
			cin >> a;
		 }

	{
		cout << endl << "Koniec!" << endl;
		cout << endl;
		cout << "Najmniejsza liczba: " << min << endl;
		cout << "Najwieksza liczba: " << max << endl;
	}
}
