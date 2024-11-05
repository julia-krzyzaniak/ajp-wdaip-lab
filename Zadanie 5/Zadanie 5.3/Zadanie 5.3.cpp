#include <iostream>

using namespace std;

int main()
{
    int n, j = 2;

    cout << "Podaj liczbe: ";
    cin >> n;
    cout << endl;

    for(int i = 1; i <= n; i++)
    {
        cout << i << " x " << j << " = " << i * j << endl;
        j++;
    }
}

