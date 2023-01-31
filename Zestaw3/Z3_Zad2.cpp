#include <iostream>
//#include <vector>

using namespace std;

int main()
{
    int suma = 0;
	for (int i = -100; i <= 0; i++)
	{
		if (i % 2 != 0) suma += i;
	}
	cout << "Suma to " << suma << endl;
}
