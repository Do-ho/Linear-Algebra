#include "KDH_function.h"

void HW06() {
	array<float, 3> v = { 3.2f, 2.0f, -2.6f }; //v ����
	array<float, 3> u1 = { 1.0f, 0.4f, 4.8f }; //u1 ����
	array<float, 3> u2 = { 3.4f, 1.4f, -6.4f }; //u2 ����
	array<float, 3> u3 = { -1.2f, 0.2f, -1.0f }; //u3 ����

	isLinearCombination(v, u1, u2, u3) ? cout << "���������Դϴ�." << endl : cout << "���������� �ƴմϴ�." << endl;
}

void HW24() {
	array<int, 3> v1 = { 2, 2, 1}; //v1 ����
	array<int, 3> v2 = { 3, 1, 2 }; //v2 ����
	array<int, 3> v3 = { 1, -5, 2 }; //v3 ����

	isLinearlyDependent(v1, v2, v3) ? cout << "���������Դϴ�." << endl : cout << "���������Դϴ�." << endl;
}

void HW30(){
	array<int, 4> v1 = { 0, 0, 0, 1 }; //v1 ����
	array<int, 4> v2 = { 0, 0, 2, 1 }; //v2 ����
	array<int, 4> v3 = { 0, 3, 2, 1 }; //v3 ����
	array<int, 4> v4 = { 4, 3, 2, 1 }; //v4 ����

	isLinearlyDependent(v1, v2, v3, v4) ? cout << "���������Դϴ�." << endl : cout << "���������Դϴ�." << endl;
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
	case 24:
		HW24();
		break;
	case 30:
		HW30();
		break;
	default:
		break;
	}
}