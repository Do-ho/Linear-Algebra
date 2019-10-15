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
	array<array<int, 3>, 2> A1;
	array<array<int, 3>, 2> A2;
	array<array<int, 3>, 2> A3;
	array<array<int, 3>, 2> B;

	A1[0] = { 1, 0, -1 };
	A1[1] = { 0, 1, 0 };
	A2[0] = { -1, 2, 0 };
	A2[1] = { 0, 1, 0 };
	A3[0] = { 1, 1, 1 };
	A3[1] = { 0,0,0 };
	B[0] = { 3, 1, 1 };
	B[1] = { 0, 1, 0 };

	array<array<int, 4>, 6> C;
	C[0] = ;
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