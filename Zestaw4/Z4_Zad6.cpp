﻿#include <iostream>
#include <string>
//#include <vector>

using namespace std;

bool funkcja(int n) {
    string s = to_string(n);
	for (int i = 0; i < s.size()/2; i++)
	{
		if (s[i] != s[s.size() - 1 - i]) return false;
	}
	return true;
}

int main()
{
	//zdanych przypadkow testowych nie bede robil, dziekuje pozdrawiam
	int n;
	cout << "Podaj liczbe: "; cin >> n;
	cout << funkcja(n) << endl;
}
