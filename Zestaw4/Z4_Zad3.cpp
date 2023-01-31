#include <iostream>
//#include <vector>

using namespace std;

int funkcja(int n) {
    if (n == 0) return 2;
    if (n > 0) return 10 * funkcja(n - 1) + 2;
}

int main()
{
    int n;
    cout << "Podaj n: "; cin >> n;
    cout << funkcja(n) << endl;
}
