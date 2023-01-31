#include <iostream>
//#include <vector>

using namespace std;

int funkcja(int arr[], int size) {
	pair<int, int> element;
    int max_np = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0 && arr[i] > max_np) {
			max_np = arr[i];
			element = { max_np, i };
		}
	}
	if (max_np == 0)
	{
		return -1;
	}
	else return element.second;
}

int main()
{
	int const n = 5;
	int arr[n] = { 11, 0, 20, 11, 9 };
	cout << funkcja(arr, n) << endl;
}
