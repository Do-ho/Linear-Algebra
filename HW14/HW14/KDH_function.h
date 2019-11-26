#pragma once
#include <iostream>
#include <cstdio>
#include <cmath>
#include <array>

using namespace std;

float vector_multiple(array<float, 3> a, array<float, 3> b);
float vector_multiple(array<float, 4> a, array<float, 4> b);

void gauss_04(array<array<float, 2>, 3>* a) {
	for (int i = 0; i < 3; i++)
	{
		(*a)[i][1] /= 3.0f;
	} //R2/3
	
	for (int i = 0; i < 3; i++)
	{
		(*a)[i][0] = (*a)[i][0] - (2 * (*a)[i][1]);
	}
	
}

void print_array(array<array<float, 2>, 3> a) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void print_array(array<array<float, 5>, 5> a) {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

void swap(array<array<float, 5>, 5>* a, int p, int q) {
	for (int i = 0; i < 5; i++)
	{
		int temp = (*a)[p-1][i];
		(*a)[p - 1][i] = (*a)[q - 1][i];
		(*a)[q - 1][i] = temp;
	}
}

void add(array<array<float, 5>, 5>* a, int p, int q, float n) {
	for (int i = 0; i < 5; i++)
	{
		(*a)[p - 1][i] += n * (*a)[q - 1][i];
	}
}

void multiple(array<array<float, 5>, 5>* a, int p, float n) {
	for (int i = 0; i < 5; i++)
	{
		(*a)[p - 1][i] *= n;
	}
}

bool b_orthogonal(array<array<float, 4>, 5> A, array<float, 4> v1) {
	bool check = true;
	for (int i = 0; i < 5; i++)
	{
		float sum = 0;
		for (int j = 0; j < 4; j++)
		{
			sum += A[i][j] * v1[j];
		}
		if (sum != 0) check = false;
	}
	
	return check;
}

void print_array(array<array<float, 5>, 4> a) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

void swap(array<array<float, 5>, 4>* a, int p, int q) {
	for (int i = 0; i < 5; i++)
	{
		int temp = (*a)[p - 1][i];
		(*a)[p - 1][i] = (*a)[q - 1][i];
		(*a)[q - 1][i] = temp;
	}
}

void add(array<array<float, 5>, 4>* a, int p, int q, float n) {
	for (int i = 0; i < 5; i++)
	{
		(*a)[p - 1][i] += n * (*a)[q - 1][i];
	}
}

void multiple(array<array<float, 5>, 4>* a, int p, float n) {
	for (int i = 0; i < 5; i++)
	{
		(*a)[p - 1][i] *= n;
	}
}

bool b_orthogonal(array<array<float, 5>, 3> A, array<float, 5> v1) {
	bool check = true;
	for (int i = 0; i < 3; i++)
	{
		float sum = 0;
		for (int j = 0; j < 5; j++)
		{
			sum += A[i][j] * v1[j];
		}
		if (sum != 0) check = false;
	}

	return check;
}

void print_array(array<array<float, 4>, 3> a) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

void swap(array<array<float, 4>, 3>* a, int p, int q) {
	for (int i = 0; i < 4; i++)
	{
		int temp = (*a)[p - 1][i];
		(*a)[p - 1][i] = (*a)[q - 1][i];
		(*a)[q - 1][i] = temp;
	}
}

void add(array<array<float, 4>, 3>* a, int p, int q, float n) {
	for (int i = 0; i < 4; i++)
	{
		(*a)[p - 1][i] += n * (*a)[q - 1][i];
	}
}

void multiple(array<array<float, 4>, 3>* a, int p, float n) {
	for (int i = 0; i < 4; i++)
	{
		(*a)[p - 1][i] *= n;
	}
}

array<float, 3> proj(array<float, 3> v, array<float, 3> u1, array<float, 3> u2) {
	float a = vector_multiple(u1, v) / vector_multiple(u1, u1);
	float b = vector_multiple(u2, v) / vector_multiple(u2, u2);

	array<float, 3> result;

	for (int i = 0; i < 3; i++) {
		result[i] = a * u1[i] + b * u2[i];
	}
	
	return result;
}

float vector_multiple(array<float, 3> a, array<float, 3> b) {
	return (a[0] * b[0]) + (a[1] * b[1]) + (a[2] * b[2]);
}

array<float, 4> proj(array<float, 4> v, array<float, 4> u1, array<float, 4> u2) {
	float a = vector_multiple(u1, v) / vector_multiple(u1, u1);
	float b = vector_multiple(u2, v) / vector_multiple(u2, u2);

	array<float, 4> result;

	for (int i = 0; i < 4; i++) {
		result[i] = a * u1[i] + b * u2[i];
	}

	return result;
}

float vector_multiple(array<float, 4> a, array<float, 4> b) {
	return (a[0] * b[0]) + (a[1] * b[1]) + (a[2] * b[2]) + (a[3] * b[3]);
}