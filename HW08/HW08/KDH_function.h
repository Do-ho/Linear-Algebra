#pragma once
#include <iostream>
#include <cstdio>
#include <cmath>
#include <array>

using namespace std;

void print_matrix(array<array<float, 5>, 4> matrix, int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void print_matrix(array<array<float, 4>, 4> matrix, int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void swap(array<array<float, 5>, 4>* matrix, int i, int j) {
	for (int w = 0; w < 5; w++)
	{
		float temp;
		temp = (*matrix)[i][w];
		(*matrix)[i][w] = (*matrix)[j][w];
		(*matrix)[j][w] = temp;
	}
}
void swap(array<array<float, 4>, 4>* matrix, int i, int j) {
	for (int w = 0; w < 4; w++)
	{
		float temp;
		temp = (*matrix)[i][w];
		(*matrix)[i][w] = (*matrix)[j][w];
		(*matrix)[j][w] = temp;
	}
}
void add(array<array<float, 5>, 4>* matrix, int i, int j, float m) {
	for (int w = 0; w < 5; w++)
	{
		(*matrix)[i][w] += (*matrix)[j][w] * m;
	}
}
void add(array<array<float, 4>, 4>* matrix, int i, int j, float m) {
	for (int w = 0; w < 4; w++)
	{
		(*matrix)[i][w] += (*matrix)[j][w] * m;
	}
}
void multiple(array<array<float, 5>, 4>* matrix, int i, float j) {
	for (int w = 0; w < 5; w++)
	{
		(*matrix)[i][w] *= j;
	}
}
void multiple(array<array<float, 4>, 4>* matrix, int i, float j) {
	for (int w = 0; w < 5; w++)
	{
		(*matrix)[i][w] *= j;
	}
}

void U(array<array<float, 5>, 4>* matrix) {
	add(matrix, 1, 0, 2.0f);
	add(matrix, 2, 0, -1.0f);
	add(matrix, 2, 1, -1.0f / 3.0f);
	add(matrix, 3, 1, 1.0f);


	print_matrix(*matrix, 4, 5);
}
void L(array<array<float, 4>, 4>* matrix) {
	//add(matrix, 1, 0, 2.0f);
	(*matrix)[1][0] = -2;
	//add(matrix, 2, 0, -1.0f);
	(*matrix)[2][0] = 1;
	(*matrix)[3][0] = 0;
	//add(matrix, 2, 1, -1.0f / 3.0f);
	(*matrix)[2][1] = 1.0f/3.0f;
	//add(matrix, 3, 1, 1.0f);
	(*matrix)[3][1] = -1;


	print_matrix(*matrix, 4, 4);
}