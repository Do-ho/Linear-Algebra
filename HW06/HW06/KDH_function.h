#pragma once
#include <iostream>
#include <cstdio>
#include <cmath>
#include <array>

using namespace std;

void print_matrix(array<array<float, 4>, 4> matrix, int row, int col);
void rref07(array<array<float, 4>, 4>* matrix, int row, int col);
void rref16(array<array<float, 4>, 4>* matrix, int row, int col);
void swap(array<array<float, 4>, 4>* matrix, int i, int j);
void add(array<array<float, 4>, 4>* matrix, int i, int j, float m);
void multiple(array<array<float, 4>, 4>* matrix, int i, float j);
void subtract(array<array<float, 4>, 6>* matrix, int i, int j, float m);
void matrix_add(const array<array<int, 2>, 2> a, const array<array<int, 2>, 2> b);
void print_matrix(array<array<float, 5>, 9> matrix, int row, int col);

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
void print_matrix(array<array<float, 4>, 6> matrix, int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void print_matrix(array<array<float, 5>, 9> matrix, int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void swap(array<array<float, 4>, 6>* matrix, int i, int j) {
	for (int w = 0; w < 4; w++)
	{
		float temp;
		temp = (*matrix)[i][w];
		(*matrix)[i][w] = (*matrix)[j][w];
		(*matrix)[j][w] = temp;
	}
}
void swap(array<array<float, 5>, 9>* matrix, int i, int j) {
	for (int w = 0; w < 5; w++)
	{
		float temp;
		temp = (*matrix)[i][w];
		(*matrix)[i][w] = (*matrix)[j][w];
		(*matrix)[j][w] = temp;
	}
}
void add(array<array<float, 4>, 6>* matrix, int i, int j, float m) {
	for (int w = 0; w < 4; w++)
	{
		(*matrix)[i][w] += (*matrix)[j][w] * m;
	}
}
void add(array<array<float, 5>, 9>* matrix, int i, int j, float m) {
	for (int w = 0; w < 5; w++)
	{
		(*matrix)[i][w] += (*matrix)[j][w] * m;
	}
}
void subtract(array<array<float, 4>, 6>* matrix, int i, int j, float m) {
	for (int w = 0; w < 4; w++)
	{
		(*matrix)[i][w] -= (*matrix)[j][w] * m;
	}
}
void subtract(array<array<float, 5>, 9>* matrix, int i, int j, float m) {
	for (int w = 0; w < 5; w++)
	{
		(*matrix)[i][w] -= (*matrix)[j][w] * m;
	}
}
void multiple(array<array<float, 4>, 6>* matrix, int i, float j) {
	for (int w = 0; w < 4; w++)
	{
		(*matrix)[i][w] *= j;
	}
}
void multiple(array<array<float, 5>, 9>* matrix, int i, float j) {
	for (int w = 0; w < 5; w++)
	{
		(*matrix)[i][w] *= j;
	}
}

void rref07(array<array<float, 4>, 6>* matrix, int row, int col) {
	add(matrix, 2, 0, 1.0f);
	subtract(matrix, 4, 0, 1.0f);
	subtract(matrix, 4, 1, 1.0f);
	multiple(matrix, 1, 0.5f);
	add(matrix, 0, 1, 1.0f);
	add(matrix, 2, 1, 1.0f);
	multiple(matrix, 2, 0.4f);
	subtract(matrix, 0, 2, 1.5f);
	subtract(matrix, 1, 2, 0.5f);
	add(matrix, 4, 2, 2.0f);
	swap(matrix, 3, 4);
	add(matrix, 2, 3, -3.0f);
	(*matrix)[2][3] = 0; //위의 식 오류로 인한 수정
	multiple(matrix, 3, 5.0f / 3.0f);
	(*matrix)[3][3] = 1; //위의 식 오류로 인한 수정
	subtract(matrix, 0, 3, 0.8f);
	(*matrix)[0][3] = 0; //위의 식 오류로 인한 수정
	add(matrix, 1, 3, 0.4f);
	(*matrix)[1][3] = 0; //위의 식 오류로 인한 수정
}

void rref16(array<array<float, 5>, 9>* matrix, int row, int col) {
	add(matrix, 1, 0, 1.0f);
	add(matrix, 4, 0, -2.0f);
	add(matrix, 7, 0, -2.0f);
	add(matrix, 8, 0, -6.0f);
	add(matrix, 8, 1, 1.0f);
	multiple(matrix, 1, 1.0f / 3.0f);
	add(matrix, 0, 1, -2.0f);
	add(matrix, 4, 1, 1.0f);
	swap(matrix, 2, 7);
	add(matrix, 0, 2, 1.0f);
	add(matrix, 1, 2, -1.0f);
	add(matrix, 8, 2, -2.0f);
	swap(matrix, 3, 4);
	add(matrix, 0, 3, -1.0f);
	add(matrix, 1, 3, 2.0f);
	add(matrix, 2, 3, -2.0f);
	add(matrix, 8, 3, 2.0f);
}