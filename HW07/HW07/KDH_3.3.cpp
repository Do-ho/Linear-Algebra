#include "KDH_function.h"

void HW06() {
	array<array<float, 2>, 2> a;
	a[0] = { 1.0f / sqrt(2.0f), 1.0f / sqrt(2.0f) };
	a[1] = { -1.0f / sqrt(2.0f), 1.0f / sqrt(2.0f) };
	array<array<float, 2>, 2> result = inverseMatrix(a); //result�� �����

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
}

void HW12() {
	array<array<float, 2>, 2> a;
	array<array<float, 1>, 2> b;
	a[0] = { 1.0f, -1.0f };
	a[1] = { 2.0f, 1.0f };
	b[0] = { 1.0f };
	b[1] = { 2.0f };

	systemofQuadraticeEuations(a, b);
}

void HW57() {
	array<array<float, 4>, 4> a;
	array<array<float, 4>, 4> b;
	a[0] = { 0.0f, -1.0f, 1.0f, 0.0f };
	a[1] = { 2.0f, 1.0f, 0.0f, 2.0f };
	a[2] = { 1.0f ,-1.0f , 3.0f , 0.0f };
	a[3] = { 0.0f, 1.0f, 1.0f, -1.0f };
	b[0] = { 1.0f, 0.0f, 0.0f, 0.0f };
	b[1] = { 0.0f, 1.0f, 0.0f, 0.0f };
	b[2] = { 0.0f, 0.0f, 1.0f, 0.0f };
	b[3] = { 0.0f, 0.0f, 0.0f, 1.0f };

	//rref(&a); //a�� ���콺���������� �Ұ�
	cout << endl;
	rref(&b); //�Ұ��ߴ� ������ b�� �ݿ�
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
	case 57:
		HW57();
		break;
	}	
}