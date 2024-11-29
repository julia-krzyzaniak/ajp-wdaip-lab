#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	const int n = 30;
	int tab1[n];
	int a, c = 0;

	cout << "Podaj liczbe: ";
	cin >> a;

	cout << endl;

	cout << "Program generujacy tablice 30 elementowa o wartosciach losowych z przedzialu od -10 do 10: \n";

	for (int i = 0; i < n; i++)
	{
		tab1[i] = (rand() % 21) - 10;
		cout << tab1[i] << " ";
	}
	cout << endl;
	cout << endl;

	for (int i = 0; i < n; i++) {
		if (tab1[i] == a) {

			c++;
		}

	}
	cout << "Ilosc wystapien podanej liczby: " << c;

}
