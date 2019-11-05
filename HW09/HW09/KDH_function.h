#pragma once
#include <iostream>
#include <cstdio>
#include <cmath>
#include <array>

using namespace std;

void print_matrix(array<array<int, 3>, 3> matrix, int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void swap(array<array<int, 3>, 3>* matrix, int i, int j) {
	for (int w = 0; w < 3; w++)
	{
		float temp;
		temp = (*matrix)[i][w];
		(*matrix)[i][w] = (*matrix)[j][w];
		(*matrix)[j][w] = temp;
	}
}
void add(array<array<int, 3>, 3>* matrix, int i, int j, float m) {
	for (int w = 0; w < 3; w++)
	{
		(*matrix)[i][w] += (*matrix)[j][w] * m;
	}
}
void multiple(array<array<int, 3>, 3>* matrix, int i, float j) {
	for (int w = 0; w < 3; w++)
	{
		(*matrix)[i][w] *= j;
	}
}

void eigenvector(array < array<int, 3>,3> a, array<int, 3> b) {
	array<int, 3> result = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			result[i] += a[i][j] * b[j];
		}
		printf("%d\n", result[i]);
	}
}

void eigenvector(array < array<int, 3>, 3> a, array < array<int, 3>, 3> b) {
	array<array<int, 3>, 3> result;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			result[i][j] = a[i][j] - b[i][j];
		}
	}
	add(&result, 1, 0, -1); //R2=R2-R1
	add(&result, 2, 0, -4); //R3=R3-4R1
	add(&result, 2, 1, -1); //R3=R3-R2
	multiple(&result, 1, 0.5); 
	add(&result, 0, 1, 1);  //R1=R1+R2
	print_matrix(result, 3, 3);

}