#include <iostream>

using namespace std;

int main()
{
	int tab[8];
	int i;

	for (i = 0; i < 8; i++)
	{
		cout << "Podaj liczbe: ";
		cin >> tab[i];	
	}

	for (i = 0; i < 8; i++)
	{
		cout << tab[i] << " ";
	}
	
}
