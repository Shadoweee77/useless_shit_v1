#include <iostream>
#include <vector>

using namespace std;

vector<int> funkcja(int n) {
    vector<int> wyniki;
    for (int i = 1; i <= n; i++)
    {
        int wynik = 3 * i;
        if (i % 2 == 0) wynik *= -1;
        wyniki.push_back(wynik);
    }
    return wyniki;
}

void wypisz(vector<int> v) {
    cout << "i | wartosc" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << i << " | " << v[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Podaj n: "; cin >> n;
    wypisz(funkcja(n));
}