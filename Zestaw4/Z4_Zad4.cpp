#include <iostream>
//#include <vector>

using namespace std;

int funkcja(int m, int n, int arr[]) {
    int suma = 0;
	for (int i = 0; i < m; i++)
	{
		if (arr[i] > n) suma++;
	}
	return suma;
}

int main()
{
	int const m1 = 3, m2 = 5;
	int n = 6;
	int arr1[m1] = { 0,4,6 };
	int arr2[m2] = { 0, 4, 6, 8, 10 };
	cout << "Test 1: " << funkcja(m1, n, arr1) << endl;
	cout << "Test 2: " << funkcja(m2, n, arr2) << endl;
}
