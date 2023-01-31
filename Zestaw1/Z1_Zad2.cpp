#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "Program zliczy sume liczb parzystych i nie parzystych. Prosze zakonczyc wprowadzanie liczb poprzez wcisniecie CTRL + Z oraz potwierdzenie ENTERem.\n";
	int n;
	vector<int> liczby;
	while (cin >> n)
	{
		liczby.push_back(n);
	}
	int parz = 0, nparz = 0;
	for (int i = 0; i < liczby.size(); i++)
	{
		if (liczby[i] % 2 == 0) parz += liczby[i];
		else nparz += liczby[i];
	}
    cout << "Suma liczb parzystych to " << parz << "\nSuma liczb nieparzystych to "<< nparz << endl;
}
