#include <iostream>
#include <vector>

using namespace std;

void wypisz(vector<int> v1, vector<int> v2) {
	cout << "i | v1 | v2" << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << i << " | " << v1[i] << " | " << v2[i] << endl;
	}
}

int main()
{

    int n;
    cout << "Podaj n: "; cin >> n;
	vector<int> v1(n, 0);
	vector<int> v2(n, 0);
	for (int i = 0; i < n; i++)
	{
		int liczba;
		cin >> liczba;
		v1[i] = liczba;
		v2[n - i - 1] = liczba;
	}
	wypisz(v1, v2);
}
