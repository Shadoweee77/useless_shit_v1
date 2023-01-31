#include <iostream>
#include <vector>
using namespace std;

/*
void wypisz_wek(vector<int> wek) {
    cout << "i | wartosc" << endl;
    for (int i = 0; i < wek.size(); i++)
    {
        cout << i << " | " << wek[i] << endl;
    }
}
*/

int main()
{
    int unsigned n;
    int liczby;
    cout << "Podaj liczbe calkowita: "; cin >> n;
    vector<int> wek;
    for (int i = 0; i < n; i++)
    {
        cin >> liczby;
        if (liczby % 3 == 0 && liczby % 2 != 0) wek.push_back(liczby);
    }
    //wypisz_wek(wek);
}
