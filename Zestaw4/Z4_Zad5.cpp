#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> v;
	for (int i = 0; i < 10; i++)
	{
		float n;
		cout << "Podaj liczbe: "; cin >> n;
		v.push_back(n);
	}
	cout << "\n\n========================" << endl;
	for (int i = v.size()-1; i >= 0; i--)
	{
		cout << v[i] << endl;
	}
}
