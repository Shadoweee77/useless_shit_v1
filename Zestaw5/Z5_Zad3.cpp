#include <iostream>
//#include <vector>

using namespace std;

int funkszyn(int en) {
	int sum = 0;
	for (int i = 0; i <= en; i++)
	{
		if (i % 2 != 0) sum += i;
	}
	return sum;
}

int main()
{
	cout << funkszyn(1) << endl;
	cout << funkszyn(5) << endl;
	cout << funkszyn(12) << endl;
}
