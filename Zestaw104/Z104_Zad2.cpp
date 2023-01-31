#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Podaj a: "; cin >> a;
    cout << "Podaj b: "; cin >> b;
    cout << "Podaj c: "; cin >> c;
    if (a > (double)(b + c) / 2.0)
    {
        cout << "a jest wieksze niz srednia." << endl;
    }
    else cout << "a nie jest wieksze niz srednia." << endl;
}
