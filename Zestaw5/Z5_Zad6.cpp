#include <iostream>
//#include <vector>

using namespace std;

bool funkcja(int n, int arr[]) {
	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] < arr[i]) return false;
	}
	return true;
}

int main()
{
	int const n = 5;
	int arr1[n] = { 1,2,3,4,5 };
	int arr2[n] = { 5,4,3,2,1 };
	int arr3[n] = { 5,3,3,1,0 };
	int arr4[n] = { 1,2,3,2,1 };
	cout << funkcja(n, arr1) << endl;
	cout << funkcja(n, arr2) << endl;
	cout << funkcja(n, arr3) << endl;
	cout << funkcja(n, arr4) << endl;

}
