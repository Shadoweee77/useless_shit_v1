#include <iostream>
//#include <vector>

using namespace std;

bool funkcja(int n) {
	if (n == 1 || n == 4) return true;
	for (int i = 0; i < n/2; i++)
	{
		if(i*i == n) return true;
	}
	return false;
}

int main()
{
    int n;
    cout << "Podaj n: "; cin >> n;
    cout << funkcja(n) << endl;
}
