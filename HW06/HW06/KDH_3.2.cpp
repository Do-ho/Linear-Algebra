#include "KDH_function.h"

void HW04() {
	array<array<int, 2>, 2> A;
	array<array<int, 2>, 2> B;
	//2(A-B+X) = 3(X-A)
	//2A-2B+2X = 3X-3A
	//X = 5A-2B
	
	A[0] = { 1*5, 2 * 5 };
	A[1] = { 3 * 5, 4 * 5 };
	B[0] = { -1* -2, 0 * -2 };
	B[1] = { 1 * -2, 1 * -2 };

	matrix_add(A, B);
}

void HW07() {
	int col = 4;
	int row = 6;
	array<array<float, 4>, 6> matrix;
	array<array<float, 4>, 6> list;
	list[0] = { 1, -1, 1, 3 };
	list[1] = { 0, 2, 1, 1 };
	list[2] = { -1, 0, 1, 1 };
	list[3] = { 0, 0, 0, 0 };
	list[4] = { 1, 1, 0, 1 };
	list[5] = { 0, 0, 0, 0 };

	matrix = list;

	print_matrix(matrix, row, col);
	cout << endl << "-->" << endl;
	cout << endl;
	rref07(&matrix, row, col);
	print_matrix(matrix, row, col);
}

int main()
{
	int input;
	cout << "문제 번호를 입력하세요 : ";
	cin >> input;

	switch (input)
	{
	case 4:
		HW04();
		break;
	
	case 7:
		HW07();
		break;
	}
}