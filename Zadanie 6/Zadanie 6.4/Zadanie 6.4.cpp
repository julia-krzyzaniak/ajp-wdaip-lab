#include <iostream>

using namespace std;

int main()
{
	const int n = 10;
	int tab1[n] = { 13, 45, 111, 67, 4, 51, 16, 73, 88, 9 }; 
	int tab2[n] = { 15, 111, 26, 3, 14, 15, 86, 17, 8, 19 };
	int tabsum[n];


	for (int i = 0; i < n; i++)
	{
		tabsum[i] = tab1[i] + tab2[i];
		cout << tab1[i] << " + " << tab2[i] << " = " << tabsum[i] << endl;
	}
}