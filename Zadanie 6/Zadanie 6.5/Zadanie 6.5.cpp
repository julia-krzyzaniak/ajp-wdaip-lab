#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
	srand(time(NULL));
	const int n = 12;
	int temp;
	int tab1[n], tab2[n];


	cout << "Program generujacy tablice 12 elementowa o wartosciach losowych z przedzialu od 1 do 5: \n";

	for (int i = 0; i < n; i++)
	{
		tab1[i] = (rand() % 5) + 1;
		cout << tab1[i] << " ";
	}

	cout << endl << endl;

	cout << "Odwrocenie tabeli: " << endl;

	for (int i = 0, j = n - 1; i < n; i++, j--)
	{
		tab2[i] = tab1[j];
		cout << tab2[i] << " ";

	}

}
