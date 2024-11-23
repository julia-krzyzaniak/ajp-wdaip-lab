#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
	srand(time(NULL));

	int tab[15];
	int i = 0, sumap = 0, sumanp = 0, sumau = 0;


	cout << "Program generujacy tablice 15 elementowa o wartosciach losowych z przedzialu od -10 do +10: \n";

	for (i = 0; i < 15; i++)
	{
		tab[i] = (rand() % 21) - 10;
		cout << i << ": " << tab[i] << endl;
	}
	for (i = 0; i < 15; i++)
	{
		if (i % 2 == 0) {

			sumap = sumap + tab[i];
		}
		 
		else if (i % 2 == 1) {

			sumanp = sumanp + tab[i];
		}

		else if (tab[i] < 0) {
			sumau = sumau + tab[i];
		}
		
	}
	cout << "Suma wszystkich liczb o indeksach parzystych znajdujacych sie w tablicy: " << sumap << endl;
	cout << "Suma wszystkich liczb o indeksach nieparzystych znajdujacych sie w tablicy: " << sumanp << endl;
	cout << "Suma wszystkich liczb ujemnych znajdujacych sie w tablicy: " << sumau << endl;

}
