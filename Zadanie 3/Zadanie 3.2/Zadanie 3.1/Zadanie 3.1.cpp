#include <iostream>

using namespace std;

int main()
{
    int a, suma = 0;

    do {  
        cout << "Podaj liczbe: ";
        cin >> a;
        suma = suma + a;
    } 
    while (suma <= 100);
    
    cout << "Suma: "<<suma;
   
}


