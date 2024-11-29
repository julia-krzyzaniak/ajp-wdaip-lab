#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	const int n = 30;
	int tab1[n];

	cout << "Program generujacy tablice 30 elementowa o wartosciach losowych z przedzialu od -10 do 10: \n";

	for (int i = 0; i < n; i++)
	{
		tab1[i] = (rand() % 21) - 10;
		cout << tab1[i] << " ";
	}
	cout << endl << endl;

	cout << "Sortowanie babelkowe: " << endl;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (tab1[j] > tab1[j + 1]) {
				int k = tab1[j];
				tab1[j] = tab1[j + 1];
				tab1[j + 1] = k;
			}
		}
	}

	for (int i = 0; i < n; i++) {

		cout << tab1[i] << " ";
	}

	cout << endl << endl;
	cout << "Sortowanie przez wstawianie: " << endl;

	for (int i = 0; i < n; i++) {

		int temp = tab1[i];
		int j = i - 1;

		while (j >= 0 && tab1[j] > temp) {
			tab1[j + 1] = tab1[j];
				j--;
		}
		tab1[j + 1] = temp;

		cout << tab1[i] << " ";
	}


}