#include "KDH_function.h"

void HW06() {
	array<float, 3> v = { 3.2f, 2.0f, -2.6f }; //v 벡터
	array<float, 3> u1 = { 1.0f, 0.4f, 4.8f }; //u1 벡터
	array<float, 3> u2 = { 3.4f, 1.4f, -6.4f }; //u2 벡터
	array<float, 3> u3 = { -1.2f, 0.2f, -1.0f }; //u3 벡터

	isLinearCombination(v, u1, u2, u3) ? cout << "일차결합입니다." << endl : cout << "일차결합이 아닙니다." << endl;
}

void HW24() {
	array<int, 3> v1 = { 2, 2, 1}; //v1 벡터
	array<int, 3> v2 = { 3, 1, 2 }; //v2 벡터
	array<int, 3> v3 = { 1, -5, 2 }; //v3 벡터

	isLinearlyDependent(v1, v2, v3) ? cout << "일차종속입니다." << endl : cout << "일차독립입니다." << endl;
}

void HW30(){
	array<int, 4> v1 = { 0, 0, 0, 1 }; //v1 벡터
	array<int, 4> v2 = { 0, 0, 2, 1 }; //v2 벡터
	array<int, 4> v3 = { 0, 3, 2, 1 }; //v3 벡터
	array<int, 4> v4 = { 4, 3, 2, 1 }; //v4 벡터

	isLinearlyDependent(v1, v2, v3, v4) ? cout << "일차종속입니다." << endl : cout << "일차독립입니다." << endl;
}

int main()
{
	int input;
	cout << "문제 번호를 입력하세요 : ";
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