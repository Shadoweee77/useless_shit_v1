#include <iostream>

using namespace std;

void funkcja(int n, int m, int arr[]) {
    int suma = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= 2 * m) suma++;
	}
	cout << "Jest " << suma << " liczb mniejszych badz rownych " << 2 * m << endl;
}

int main()
{
	int const n1 = 3, n2 = 6;
	int m1 = 2, m2 = 4;
	int arr1[n1] = { 4,5,6 }, arr2[n2] = {9,8,7,6,5,4};
	funkcja(n1, m1, arr1);
	funkcja(n2, m2, arr2);
}
