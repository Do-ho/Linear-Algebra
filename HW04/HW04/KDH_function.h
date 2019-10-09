#pragma once
#include <iostream>
#include <cmath>
#include <array>

using namespace std;

void arrprint(const array<array<int, 10>, 9> a) {
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

array<array<int, 10>, 9> arrzero(int n, array<array<int, 10>, 9> a) {
	for (int i = n+1; i < 9; i++)
	{
		if (a[i][n] == 1) {
			for (int j = 0; j < 10; j++)
			{
				a[i][j] = (a[i][j] + a[n][j]) % 2;
			}
		}
	}
	return a;
}