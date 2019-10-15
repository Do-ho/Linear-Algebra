#pragma once
#include <iostream>
#include <cstdio>
#include <cmath>
#include <array>

using namespace std;

void matrix_add(const array<array<int, 2>, 2> a, const array<array<int, 2>, 2> b) {
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
}

