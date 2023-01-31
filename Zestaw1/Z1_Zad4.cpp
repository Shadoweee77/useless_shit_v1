#include <iostream>

using namespace std;

double min_tab(double arr[], int size) {
	double min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	if (min >= 0) return 0;// [0, -2, 4, 1] da -2 | [1, 2, 3, 4] da 1>0 | [0, 0, 0, 0] da 0=0 | musza byc ujemne.
	return min;
}

int main()
{
	int const rozmiar = 4;
	double tablica[rozmiar] = {0, -2, 4, 1};
	cout << "Najmniejsza wartosc z tablicy to " << min_tab(tablica, rozmiar) << endl;
}
