#include <iostream>

using namespace std;

int funkcja(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return funkcja(n - 1) + 2 * funkcja(n - 2);
}

int main()
{
    int unsigned liczba;
    liczba = 5;
    //cout << "Podaj liczbe: "; cin >> liczba;
    cout << "Wynikiem funkci dla liczby = " << liczba << " jest " << funkcja(liczba) << endl;
}
