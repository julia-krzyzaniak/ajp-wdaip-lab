#include <iostream>

using namespace std;

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cout << "Program obliczajacy n-ty wyraz ciagu Fibonacciego: " << endl << endl;
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << n << "-ty wyraz ciagu Fibonacciego to: " << fibo(n);
}

