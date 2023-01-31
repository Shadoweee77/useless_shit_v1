#include <iostream>
//#include <vector>

using namespace std;

int funkcja(int n, int arr[]) {
    int suma = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0) suma++;
	}
	return suma;
}

int main()
{
	int const n = 5;
	int arr[n] = { 1, 2, 3, 4, 5 };
	cout << funkcja(n, arr) << endl;
}
