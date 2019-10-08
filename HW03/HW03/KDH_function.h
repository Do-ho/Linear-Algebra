#pragma once
#include <iostream>
#include <cstdio>
#include <cmath>
#include <array>

using namespace std;

bool isLinearCombination(const array<float, 3> a, const array<float, 3> b, const array<float, 3> c, const array<float, 3> d) {
	for (int i = -99; i < 100; i++)
	{
		for (int j = -99; j < 100; j++)
		{
			for (int k = -99; k < 100; k++) {
				if (a[0] == (i * b[0]) + (j * c[0]) + (k * d[0]) && a[1] == (i * b[1]) + (j * c[1]) + (k * d[1]) && a[2] == (i * b[2]) + (j * c[2]) + (k * d[2])) {
					return true;
				}
			}
		}
	}
	return false;
}

bool isLinearlyDependent(const array<int, 3> a, const array<int, 3> b, const array<int, 3> c) {
	for (int i = -99; i < 100; i++)
	{
		for (int j = -99; j < 100; j++)
		{
			for (int k = -99; k < 100; k++) {
				if (0 == (i * a[0]) + (j * b[0]) + (k * c[0]) && 0 == (i * a[1]) + (j * b[1]) + (k * c[1]) && 0 == (i * a[2]) + (j * b[2]) + (k * c[2])) {
					return true;
				}
			}
		}
	}
	return false;
}

bool isLinearlyDependent(const array<int, 4> a, const array<int, 4> b, const array<int, 4> c, const array<int, 4> d) {
	int w;
	if (a[0] == 0 && b[0] == 0 && c[0] == 0) {
		w = d[0];

		for (int i = -99; i < 100; i++) {
			for (int j = -99; j < 100; j++) {
				for (int k = -99; k < 100; k++) {
					if (i == 0 || j == 0 || k == 0 || w == 0) continue;
					if (0 == (i * a[0]) + (j * b[0]) + (k * c[0]) + (w * d[0]) && 0 == (i * a[1]) + (j * b[1]) + (k * c[1]) + (w * d[1]) && 0 == (i * a[2]) + (j * b[2]) + (k * c[2]) + (w * d[2]) && 0 == (i * a[3]) + (j * b[3]) + (k * c[3]) + (w * d[3])) {
						return true;
					}
				}
			}
		}
	}
	else {
		for (int i = -99; i < 100; i++) {
			for (int j = -99; j < 100; j++) {
				for (int k = -99; k < 100; k++) {
					for (w = -99; w < 100; w++) {
						if (i == 0 || j == 0 || k == 0 || w == 0) continue;
						if (0 == (i * a[0]) + (j * b[0]) + (k * c[0]) + (w * d[0]) && 0 == (i * a[1]) + (j * b[1]) + (k * c[1]) + (w * d[1]) && 0 == (i * a[2]) + (j * b[2]) + (k * c[2]) + (w * d[2]) && 0 == (i * a[3]) + (j * b[3]) + (k * c[3]) + (w * d[3])) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}