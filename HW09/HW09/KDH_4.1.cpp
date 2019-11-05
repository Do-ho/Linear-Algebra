#include "KDH_function.h"

void HW06() {
	array<array<int, 3>, 3> a;
	array<int, 3> b = { -2, 1, 1 };
	a[0] = { 0, 1, -1 };
	a[1] = { 1, 1, 1 };
	a[2] = { 1, 2, 0 };

	eigenvector(a, b);
	printf("���� v�� ��� A�� ���������̰� �������� 0�̴�.\n");
}

void HW12() {
	array<array<int, 3>, 3> a, b;
	a[0] = { 3, 1, -1 };
	a[1] = { 1, 1, 1 };
	a[2] = { 4, 2, 0 };
	b[0] = { 2, 0, 0 };
	b[1] = { 0, 2, 0 };
	b[2] = { 0, 0, 2 };
	
	eigenvector(a, b);
	printf("���� x=0, y=z�̴�. �� ���� ��Ȳ���� [0,1,1]�� ���������̴�.\n");
}

int main()
{
	int input;
	cout << "���� ��ȣ�� �Է��ϼ��� : ";
	cin >> input;

	switch (input)
	{
	case 6:
		HW06();
		break;
	case 12:
		HW12();
		break;



	}
	
}