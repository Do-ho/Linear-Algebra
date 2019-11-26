#pragma once
#include <iostream>
#include <cstdio>
#include <cmath>
#include <array>

using namespace std;

bool b_orthogonal(array<float, 4> a, array<float, 4> b, array<float, 4> c);
float vector_multiple(array<float, 4> a, array<float, 4> b);
bool b_orthogonal(array<float, 3> a, array<float, 3> b, array<float, 3> c);
float vector_multiple(array<float, 3> a, array<float, 3> b);
void cal_w(array<float, 3> v1, array<float, 3> v2, array<float, 3> v3, array<float, 3> w);

bool b_orthogonal(array<float, 4> a, array<float, 4> b, array<float, 4> c) {
	if (vector_multiple(a, b) == 0 && vector_multiple(a, b) == 0 && vector_multiple(b, c) == 0)
		return true;
	return false;
}

float vector_multiple(array<float, 4> a, array<float, 4> b) {
	return (a[0] * b[0]) + (a[1] * b[1]) + (a[2] * b[2]) + (a[3] * b[3]);
}

bool b_orthogonal(array<float, 3> a, array<float, 3> b, array<float, 3> c) {
	if (vector_multiple(a, b) == 0 && vector_multiple(a, b) == 0 && vector_multiple(b, c) == 0)
		return true;
	return false;
}

float vector_multiple(array<float, 3> a, array<float, 3> b) {
	return (a[0] * b[0]) + (a[1] * b[1]) + (a[2] * b[2]);
}

void cal_w(array<float, 3> v1, array<float, 3> v2, array<float, 3> v3, array<float, 3> w) {
	cout << vector_multiple(v1, w) / vector_multiple(v1, v1) << "v1 + " << vector_multiple(v2, w) / vector_multiple(v2, v2) << "v2 + " << vector_multiple(v3, w) / vector_multiple(v3, v3) << "v3" << endl;
}

float norm(array<float, 4> v) {
	return sqrt((pow(v[0], 2)) + (pow(v[1], 2)) + (pow(v[2], 2)) + (pow(v[3], 2)));
}

double det(array<array<double, 2>, 2> Q) {
	return (Q[0][0] * Q[1][1]) - (Q[0][1] * Q[1][0]);
}