#include <iostream>

using namespace std;

int main()
{
	int ocena;
	float srednia = 0;

	
	for (int i = 0; i < 7; i++) 
	{
		cout << "Podaj ocene: ";
		cin >> ocena;

		srednia = srednia + ocena;
	}
	
	srednia = srednia / 7;

	cout << "Srednia z ocen to: " << srednia << endl;

	return 0;
	
}

