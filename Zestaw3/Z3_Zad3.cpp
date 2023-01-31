#include <iostream>
//#include <vector>

using namespace std;

bool czyPierwsza(int n) {
    int dzielniki = 2;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) dzielniki++;
	}
	if (dzielniki > 2) return false;
	if (dzielniki == 2) return true;
}

int main()
{
	int n;
	cout << "Podaj liczbe: "; cin >> n;
	cout << czyPierwsza(n);
}
