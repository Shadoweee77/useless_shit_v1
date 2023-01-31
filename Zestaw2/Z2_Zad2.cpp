#include <iostream>
//#include <vector>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Dla twierdzenia pitagorasa w postaci a^2 + b^2 = c^2:\n";
    cout << "Podaj bok a: "; cin >> a;
    cout << "Podaj bok b: "; cin >> b ;
    cout << "Podaj bok c: "; cin >> c;
    if (a * a + b * b == c * c) cout << "Liczby spelniaja twierdzenie pitagorasa." << endl;
    else cout << "Liczby nie spelniaja twierdzenia pitagorasa." << endl;
}
