#include <iostream>
#include <vector>
//#include <numeric>

using namespace std;

int main()
{
	int const rozmiar = 10;
	vector<double> v;
	for (int i = 0; i < rozmiar; i++)
	{
		double liczba;
		cout << "Podaj liczbe: "; cin >> liczba;
		v.push_back(liczba);
	}
	
	
	//double srednia = accumulate(v.begin(), v.end(), 0) / (double)rozmiar;
	double srednia, temp = 0;
	for (int i = 0; i < v.size(); i++)
	{
		temp += v[i];
	}
	srednia = temp / (double)rozmiar;


	int wynik = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > srednia) wynik++;
	}
	cout << "\nIstnieje " << wynik << " elementow o wartosci wiekszej niz srednia." << endl;
}
