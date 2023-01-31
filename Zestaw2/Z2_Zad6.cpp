#include <iostream>
//#include <vector>

using namespace std;

void funkcja(int n) {
    for (int i = 0; i <= sqrt(n); ++i) {
        int j = sqrt(n - i * i);
        if (i * i + j * j == n) {
            cout << i << "^2 + " << j << "^2\n";
            i += j/2;
        }
    }
}

int main()
{
	int n;
    cout << "Podaj n: ";
	cin >> n;
	funkcja(n);
}
