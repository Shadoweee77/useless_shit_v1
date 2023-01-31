#include <iostream>
//#include <vector>

using namespace std;

int main()
{
    int n1,n2,n3;
    cout << "Podaj liczbe: "; cin >> n1;
    cout << "Podaj liczbe: "; cin >> n2;
    cout << "Podaj liczbe: "; cin >> n3;
    if ( (n1 == n2 && n1 != n3) || (n2 == n3 && n2 != n1) || (n1 == n3 && n1 != n2))
    {
        cout << "Dokladnie dwie liczby sa sobie rowne." << endl;
    }
}
