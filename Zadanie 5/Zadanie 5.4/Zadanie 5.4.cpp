#include <iostream>

using namespace std;

int main()

{
    int n, j;

    cout << "Podaj liczbe: ";
    cin >> n;
    cout << endl;

    j = n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << j << endl;
        j--;
    }

}

