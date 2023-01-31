#include <iostream>
#include <vector>

using namespace std;

void wypisz(vector<int> v) {
	cout << "i | wartosc" << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << i << " | " << v[i] << endl;
	}
}

int main()
{
    int const rozmiar = 10;
	vector<int> v;
	for (int i = 0; i < rozmiar; i++)
	{
		int n;
		cout << "Podaj element: "; cin >> n;
		v.push_back(n*n);
	}
	wypisz(v);
}
