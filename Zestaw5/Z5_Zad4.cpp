#include <iostream>
//#include <vector>

using namespace std;

int zawszetosamozadanieztablicilemozna(int m, int n, int arr[]) {
	int kolejnasumacoliczyzawszetosamo = 0;
	for (int i = 0; i < m; i++)
	{
		if (arr[i] == n) kolejnasumacoliczyzawszetosamo++;
	}
	return kolejnasumacoliczyzawszetosamo;
}

int main()
{
	int const m = 5;
	int n = 8;
	int arr[m] = { 1,8,1,8,9 };
    cout << zawszetosamozadanieztablicilemozna(m,n,arr) << endl;
}
