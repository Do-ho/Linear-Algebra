#include "KDH_function.h"

void HW20() {
	array<array<float, 3>, 2> C;
	array<array<float, 2>, 3> A;
	C[0] = { 0.75f, 0.75f, 0.75f };
	C[1] = { 1.00f, 1.00f, 1.00f };
	A[0] = { 200, 75 };
	A[1] = { 150, 100 };
	A[2] = { 100, 125 };

	matrix_multiplication(C, A);
}

void HW23() {
	array<array<int, 3>, 3> A;
	array<array<int, 3>, 3> B;
	A[0] = { 1, 0, -2 };
	A[1] = { -3, 1, 1 };
	A[2] = { 2, 0, -1 };
	B[0] = { 2, 3, 0  };
	B[1] = { 1, -1, 1 };
	B[2] = { -1, 6, 4 };
	matrix_multiplication_cols(A, B);
	
}

void HW24() {
	array<array<int, 3>, 3> A;
	array<array<int, 3>, 3> B;
	A[0] = { 1, 0, -2 };
	A[1] = { -3, 1, 1 };
	A[2] = { 2, 0, -1 };
	B[0] = { 2, 3, 0 };
	B[1] = { 1, -1, 1 };
	B[2] = { -1, 6, 4 };

	matrix_multiplication_rows(A, B);
}

void HW25() {
	array<array<int, 3>, 3> A;
	array<array<int, 3>, 3> B;
	A[0] = { 1, 0, -2 };
	A[1] = { -3, 1, 1 };
	A[2] = { 2, 0, -1 };
	B[0] = { 2, 3, 0 };
	B[1] = { 1, -1, 1 };
	B[2] = { -1, 6, 4 };

	matrix_multiplication_outer(A, B);
}

void HW26() {
	array<array<int, 3>, 3> A;
	array<array<int, 3>, 3> B;
	A[0] = { 1, 0, -2 };
	A[1] = { -3, 1, 1 };
	A[2] = { 2, 0, -1 };
	B[0] = { 2, 3, 0 };
	B[1] = { 1, -1, 1 };
	B[2] = { -1, 6, 4 };

	matrix_multiplication_cols(B, A);
}

void HW27() {
	array<array<int, 3>, 3> A;
	array<array<int, 3>, 3> B;
	A[0] = { 1, 0, -2 };
	A[1] = { -3, 1, 1 };
	A[2] = { 2, 0, -1 };
	B[0] = { 2, 3, 0 };
	B[1] = { 1, -1, 1 };
	B[2] = { -1, 6, 4 };

	
	matrix_multiplication_rows(B, A);
}

void HW28() {
	array<array<int, 3>, 3> A;
	array<array<int, 3>, 3> B;
	A[0] = { 1, 0, -2 };
	A[1] = { -3, 1, 1 };
	A[2] = { 2, 0, -1 };
	B[0] = { 2, 3, 0 };
	B[1] = { 1, -1, 1 };
	B[2] = { -1, 6, 4 };

	matrix_multiplication_outer(B, A);
}

void HW34() {
	array<array<int, 4>, 4> A;
	array<array<int, 4>, 4> B;
	A[0] = { 1, 0, 0, 1 };
	A[1] = { 0, 1, 0, 2 };
	A[2] = { 0, 0, 1, 3 };
	A[3] = { 0, 0, 0, 4 };
	B[0] = { 1, 2, 3, 1 };
	B[1] = { 0, 1, 4 ,1 };
	B[2] = { 0, 0, 1, 1 };
	B[3] = { 1, 1, 1, -1 };

	matrix_multiplication_rows(A, B);
}

void HW36() {
	array < array < double , 2 > , 2 > B;
	array < array < double , 2 > , 2 > C;
	B[0] = { 1/sqrt(2), -1/sqrt(2) };
	B[1] = { 1/sqrt(2) , 1/sqrt(2) };

	C = matrix_multiplication(B, B); //1번
	for (int i = 1; i < 2014; i++) { //2014번
		C = matrix_multiplication(C, B);
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%lf ", C[i][j]);
		}
		printf("\n");
	}
}

void HW40() {
	array<array<int, 6>, 6> A;

	cout << "A" << endl;
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (i <= j) A[i - 1][j - 1] = i + j;
			else A[i - 1][j - 1] = 0;
		}
	}
	print_matrix(A);

	cout << endl << "B" << endl;
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (abs(i-j)<=1) A[i - 1][j - 1] = 1;
			else A[i - 1][j - 1] = 0;
		}
	}
	print_matrix(A);

	cout << endl << "C" << endl;
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (6 <= i+j && i+j <=8) A[i - 1][j - 1] = 1;
			else A[i - 1][j - 1] = 0;
		}
	}
	print_matrix(A);
}

int main()
{
	int input;
	cout << "문제 번호를 입력하세요 : ";
	cin >> input;

	switch (input)
	{
	case 20:
		HW20();
		break;
	case 23:
		HW23();
		break;
	case 24:
		HW24();
		break;
	case 25:
		HW25();
		break;
	case 26:
		HW26();
		break;
	case 27:
		HW27();
		break;
	case 28:
		HW28();
		break;
	case 34:
		HW34();
		break;
	case 36:
		HW36();
		break;
	case 40:
		HW40();
		break;
	default:
		break;
	}
}