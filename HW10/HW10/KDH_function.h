#pragma once
#include <iostream>
#include <cstdio>
#include <cmath>
#include <array>

using namespace std;

void print_matrix(array<array<int, 4>, 4> matrix, int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void swap(array<array<int, 4>, 4>* matrix, int i, int j) {
	for (int w = 0; w < 4; w++)
	{
		float temp;
		temp = (*matrix)[i][w];
		(*matrix)[i][w] = (*matrix)[j][w];
		(*matrix)[j][w] = temp;
	}
}
void add(array<array<int, 4>, 4>* matrix, int i, int j, float m) {
	for (int w = 0; w < 4; w++)
	{
		(*matrix)[i][w] += (*matrix)[j][w] * m;
	}
}
void multiple(array<array<int, 4>, 4>* matrix, int i, float j) {
	for (int w = 0; w < 4; w++)
	{
		(*matrix)[i][w] *= j;
	}
}

void rref(array < array<int, 4>, 4> matrix) {
	swap(&matrix, 0, 1);
	add(&matrix, 1, 0, -2);
	add(&matrix, 3, 0, -2);
	swap(&matrix, 1, 2);
	add(&matrix, 3, 2, -3);
	multiple(&matrix, 1, -1);
	multiple(&matrix, 2, -1);
	print_matrix(matrix, 4, 4);
}

int determinateOfMatrix(int matrix[9])
{
	return matrix[0] * ((matrix[4] * matrix[8]) - (matrix[5] * matrix[7])) -
		matrix[3] * ((matrix[1] * matrix[8]) - (matrix[2] * matrix[7])) +
		matrix[6] * ((matrix[1] * matrix[5]) - (matrix[2] * matrix[4]));
}

void cramer_rule(int *matrix) {
	int matrix_D[9]{ matrix[0], matrix[1] , matrix[2],
		matrix[4] , matrix[5] , matrix[6] ,
		matrix[8] , matrix[9] , matrix[10] };
	int deter_D = determinateOfMatrix(matrix_D);

	int matrix_Dx[9]{ matrix[3], matrix[1] , matrix[2],
		matrix[7] , matrix[5] , matrix[6] ,
		matrix[11] , matrix[9] , matrix[10] };
	int deter_Dx = determinateOfMatrix(matrix_Dx);

	int matrix_Dy[9]{ matrix[0], matrix[3] , matrix[2],
		matrix[4] , matrix[7] , matrix[6] ,
		matrix[8] , matrix[11] , matrix[10] };
	int deter_Dy = determinateOfMatrix(matrix_Dy);

	int matrix_Dz[9]{ matrix[0], matrix[1] , matrix[3],
		matrix[4] , matrix[5] , matrix[7] ,
		matrix[8] , matrix[9] , matrix[11] };
	int deter_Dz = determinateOfMatrix(matrix_Dz);

	cout << "determinate D = " << deter_D << endl;
	cout << "determinate Dx = " << deter_Dx << endl;
	cout << "determinate Dy = " << deter_Dy << endl;
	cout << "determinate Dz = " << deter_Dz << "\n" << endl;

	if (deter_D != 0)
	{
		float x = (float)deter_Dx / (float)deter_D;
		float y = (float)deter_Dy / (float)deter_D;
		float z = (float)deter_Dz / (float)deter_D;


		cout << "Answere is (" << x << "," << y << "," << z << ")" << endl;
	}
	else
		cout << "Your equation can not be solved with Cramer's Rule\n" << endl;

}