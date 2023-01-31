#include <iostream>

using namespace std;

/*
double sqrtxd(double liczba)
{
    double x = liczba / 2;
    while (fabs(x - liczba / x) > 0.000001)
    {
        //cout << x << "|| " << liczba/x << endl;
        //możemy odkomentować tą lnijkę żeby zobaczyć jak zmienia się nasz wynik
        x = (x + liczba / x) / 2;//nową wartością boku jest średnia arytmetyczna dwóch poprzednich
        if (x * x == liczba) break;
    }
    return x;
}
*/

const double eps = 0.000001;

double pierwiastek(double P, double eps)
{
    double a = 1., b = P;

    //dopóki nie otrzymamy żądanej precyzji
    while (fabs(a - b) >= eps)
    {
        a = (a + b) / 2.;
        b = P / a;
    }

    return (a + b) / 2.;
}
int main()
{
    int unsigned n;
    cout << "Podaj n: "; cin >> n;
    int suma = 0;
    for (int i = 0; i <= n; i++)
    {
        //suma += (int)(sqrtxd(n));
        suma += (int)(pierwiastek(i, eps));
    }
    cout << "Suma to: " << suma << endl;
}
