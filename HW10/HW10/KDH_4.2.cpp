#include "KDH_function.h"

void HW25() {
	array<array<int, 4>, 4> A;
	A[0] = { 2, 0, 3, -1 };
	A[1] = { 1, 0, 2, 2 };
	A[2] = { 0, -1, 1, 4 };
	A[3] = { 2, 0, 1, -3 };

	rref(A);
	cout << "���� 1*1*1*8 = 8 " << endl;
}

void HW60() {
	int A[12] = { 1, 1, -1 , 1, 1, 1, 1 , 2, 1, -1, 0 , 3};
	cramer_rule(A);
}

int main()
{
	int input;
	cout << "���� ��ȣ�� �Է��ϼ��� : ";
	cin >> input;

	switch (input)
	{
	case 25:
		HW25();
		break;
	case 60:
		HW60();
		break;

	}

}