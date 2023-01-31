#include <iostream>
//#include <vector>

using namespace std;

bool funkcja(int n) {
    if (n % 10 == n / 10) return true;
    return false;
}

int main()
{
    //int n;
    //cout << "Podaj n: "; cin >> n;
    //cout << funkcja(n) << endl;
    cout << funkcja(10) << endl;
    cout << funkcja(11) << endl;
    cout << funkcja(12) << endl;
}
