#pragma once
#include <iostream>
#include <cstdio>
#include <cmath>
#include <array>

using namespace std;
array<array<float, 2>, 2> inverseMatrix(array<array<float, 2>, 2> a);
void systemofQuadraticeEuations(array<array<float, 2>, 2> a, array<array<float, 1>, 2> b);

array<array<float,2>, 2> inverseMatrix(array<array<float, 2>, 2> a) {
	array<array<float, 2>, 2> result;
	float c = (a[0][0] * a[1][1] - a[0][1] * a[1][0]);
	
	result[0][0] = a[1][1]/c;
	result[0][1] = -a[0][1]/c;
	result[1][0] = -a[1][0]/c;
	result[1][1] = a[0][0]/c;

	return result;
}

void systemofQuadraticeEuations(array<array<float, 2>, 2> a, array<array<float, 1>, 2> b) {
	array<array<float, 2>, 2> c = inverseMatrix(a);
	array<array<float, 1>, 2> result = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			result[i][0] += c[i][j] * b[j][0]; 
		}
	}//계산식

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}//출력
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

void add(array<array<float, 4>, 4>* matrix, int i, int j, float m) {
	for (int w = 0; w < 4; w++)
	{
		(*matrix)[i][w] += (*matrix)[j][w] * m;
	}
}

void multiple(array<array<float, 4>, 4>* matrix, int i, float j) {
	for (int w = 0; w < 4; w++)
	{
		(*matrix)[i][w] *= j;
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

void rref(array<array<float, 4>, 4>* matrix) {
	swap(matrix, 0, 1);
	multiple(matrix, 0, 0.5f);
	add(matrix, 2, 0, -1);
	add(matrix, 3, 1, 1);
	multiple(matrix, 1, -1.0f);
	add(matrix, 0, 1, -0.5f);
	add(matrix, 2, 1, 1.5f);
	multiple(matrix, 2, 2.0f/3.0f);
	add(matrix, 0, 2, -0.5f);
	add(matrix, 1, 2, 1.0f);
	add(matrix, 3, 2, -2.0f);
	add(matrix, 0, 3, -4.0f);
	//(*matrix)[0][3] = 0; //오류로 인한 값삽입
	add(matrix, 1, 3, 2.0f);
	//(*matrix)[1][3] = 0; //오류로 인한 값삽입
	add(matrix, 2, 3, 2.0f);
	//(*matrix)[2][3] = 0; //오류로 인한 값삽입
	multiple(matrix, 3, 3.0f);

	print_matrix(*matrix, 4, 4);
}