#include <iostream>

using namespace std;

int funkcja(int n) {
	if (n == 0) return 1;
	if (n == 1) return 2;
	if (n > 0) {
		if (2*n % 2 == 0) return funkcja(n) + 2;
		if (2*n % 2 == 1) return 2 * funkcja(2*n - 1);
	}
}

int main()
{
	cout << funkcja(0) << endl;
	cout << funkcja(1) << endl;
	cout << funkcja(2) << endl;
	cout << funkcja(3) << endl;
	cout << funkcja(4) << endl;
	cout << funkcja(5) << endl;
}

