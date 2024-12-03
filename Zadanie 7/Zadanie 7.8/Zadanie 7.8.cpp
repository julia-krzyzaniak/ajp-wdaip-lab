#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

	const int n = 100;       
	int tab[n]; 

int main()
{
	cout << "Program generujacy tablice 100 elementowa o wartosciach losowych z przedzialu od 0 do 200: \n";

	for (int i = 0; i < n; i++)
	{
		tab[i] = (rand() % 201);
		cout << tab[i] << " ";
	} 


	cout << endl << endl << "Najdluzszy rosnacy podciag: " << endl;

	for (int i = 0; i < n; i++)
	{
		if (tab[i] < tab[i + 1]) {
			cout << tab[i] << " ";
		}

		else {
			cout << "Brak nadjdluszego rosnacego podciagu." << endl;
		}
	}

}