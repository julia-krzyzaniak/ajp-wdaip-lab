#include <iostream>

using namespace std;

int main()
{
	int n, silnia = 1;

	cout << "Podaj n: ";
	cin >> n;
	cout << endl;

	for (int i = 1; i <= n; i++)
	{
		silnia = silnia * i;
		cout << "!" << i << " = " << silnia << endl;
	}

}
