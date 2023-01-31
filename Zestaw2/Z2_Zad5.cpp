#include <iostream>
#include <vector>

using namespace std;

void wypisz(vector<double> v) {
	cout << "i | wartosc" << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << i << " | " << v[i] << endl;
	}
}

int main()
{
	vector<double> v;
	int n;
    cout << "Podaj n: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		double temp;
		cout << "Podaj liczbe: "; cin >> temp;
		if (temp - (int)temp == 0) v.push_back(temp);
	}
	wypisz(v);
}
