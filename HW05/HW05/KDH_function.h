#pragma once
#include <iostream>
#include <cstdio>
#include <cmath>
#include <array>

using namespace std;

void matrix_add(const array<array<int, 3>, 3> a, const array<array<int, 3>, 3> b, const array<array<int, 3>, 3> c) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j] + b[i][j] + c[i][j]);
		}
		printf("\n");
	}
}

void matrix_multiplication(const array<array<float, 3>, 2> a, const array<array<float, 2>, 3> b) {
	array<array<float, 2>, 2> c = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
			printf("%f ", c[i][j]);
		}
		printf("\n");
	}
}

void matrix_multiplication_rows(const array<array<int, 3>, 3> a, const array<array<int, 3>, 3> b) {
	array<array<int, 3>, 3> c = { 0 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				c[i][j] += a[i][k] * b[k][j]; //행부터 연산
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}

void matrix_multiplication_cols(const array<array<int, 3>, 3> a, const array<array<int, 3>, 3> b) {
	array<array<int, 3>, 3> c = { 0 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				c[j][i] += a[j][k] * b[k][i];
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}

void matrix_multiplication_outer(const array<array<int, 3>, 3> a, const array<array<int, 3>, 3> b) {
	array<array<array<int,3>, 3>, 3> c = { 0 };


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				c[i][j][k] = a[j][i] * b[i][k]; // 3개의 행렬을 구하는 공식
			}
		}
	}

	matrix_add(c[0], c[1], c[2]);
}

void matrix_multiplication_rows(const array<array<int, 4>, 4> a, const array<array<int, 4>, 4> b) {
	array<array<int, 4>, 4> c = { 0 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				c[i][j] += a[i][k] * b[k][j]; //행부터 연산
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}

array<array<double,2>,2> matrix_multiplication(const array<array<double, 2>, 2> a, const array<array<double, 2>, 2> b) {
	array<array<double, 2>, 2> c = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return c;
}

void print_matrix(const array<array<int, 6>, 6> a) {
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}