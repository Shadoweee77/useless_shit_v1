#include <iostream>

using namespace std;

int funkcja(int n) {
	if (n == 0) return 1;
	if (n == 1) return 2;
	return n % 2 == 0 ? funkcja(n/2) + 2 : 2 * funkcja(n-2);
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

