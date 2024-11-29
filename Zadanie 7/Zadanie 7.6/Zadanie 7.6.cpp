#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	const int n = 15;
	int tab1[n];
	int min, max;

	cout << "Program generujacy tablice 15 elementowa o wartosciach losowych z przedzialu od -10 do 10: \n";

	for (int i = 0; i < n; i++)
	{
		tab1[i] = (rand() % 21) - 10;
		cout << tab1[i] << " ";
	}
	cout << endl;
	
	max = tab1[0];
	min = tab1[0];

	for (int i = 0; i < n; i++) {
		if (max < tab1[i]) {
			max = tab1[i];
		}

		if (min > tab1[i]) {
			min = tab1[i];
		}
	}

	cout << endl;
	cout << "Najmniejsza liczba to: " << min << endl;
	cout << "Najwieksza liczba to: " << max << endl;

}
