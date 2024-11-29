#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	const int n = 100;
	vector<int> tab1;

	cout << "Program generujacy tablice 100 elementowa o wartosciach losowych z przedzialu od 1 do 10: \n";

	for (int i = 0; i < n; i++)
	{
		tab1.push_back((rand() % 10) + 1);
	}

	for (int i : tab1) {
		cout << i << " ";

	}
	cout << endl;
	cout << "Ilosc wystapien liczby 1: " << count(tab1.begin(), tab1.end(), 1) << endl;
	cout << "Ilosc wystapien liczby 2: " << count(tab1.begin(), tab1.end(), 2) << endl;
	cout << "Ilosc wystapien liczby 3: " << count(tab1.begin(), tab1.end(), 3) << endl;
	cout << "Ilosc wystapien liczby 4: " << count(tab1.begin(), tab1.end(), 4) << endl;
	cout << "Ilosc wystapien liczby 5: " << count(tab1.begin(), tab1.end(), 5) << endl;
	cout << "Ilosc wystapien liczby 6: " << count(tab1.begin(), tab1.end(), 6) << endl;
	cout << "Ilosc wystapien liczby 7: " << count(tab1.begin(), tab1.end(), 7) << endl;
	cout << "Ilosc wystapien liczby 8: " << count(tab1.begin(), tab1.end(), 8) << endl;
	cout << "Ilosc wystapien liczby 9: " << count(tab1.begin(), tab1.end(), 9) << endl;
	cout << "Ilosc wystapien liczby 10: " << count(tab1.begin(), tab1.end(), 10) << endl;	
}
