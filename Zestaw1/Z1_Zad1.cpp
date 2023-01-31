#include <iostream>

using namespace std;

int main()
{
	int tab[5] = { -3,4,-2,8,9 };
	int a = tab[2]; //a= -2
	int b = (a += 6); // a=4  , b=4
	int c = (b *= 2) / 3; // a=4  , b=8  , c=2
	b = c ^ a;  // a=4  , b=6  , c=2
	c = ++b;  // a=4  , b=7  , c=7
	return 0;
}