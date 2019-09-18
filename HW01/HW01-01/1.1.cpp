#include "linear-algebra-function.h"

void HW13() {
	double u[2] = { 1.0 / 2.0, sqrt(3) / 2.0 }; //u 벡터
	double v[2] = { sqrt(3) / 2.0, 1.0 / 2.0 }; //v 벡터

	cout << "u + v = [" << u[0] + v[0] << ", " << u[1] + v[1] << "]" << endl; //u+v 성분 출력
	cout << "u - v = [" << u[0] - v[0] << ", " << u[1] - v[1] << "]" << endl; //u-v 성분 출력
}

void HW20() {
	array<int, 2> u = { -2, 1 }; //u 벡터
	array<int, 2> v = { 2, -2 }; //v 벡터
	// w = -u -2v

	int w[2] = { -u[0] - 2 * v[0], -u[1] - 2 * v[1] };

	cout << "w = [" << w[0] << ", " << w[1] << "]" << endl;

}

void HW22() {
	array<int, 2> u = { 1, -1 }; //u 벡터
	array<int, 2> v = { 1, 1 }; //v 벡터
	array<int, 2> w = { 2, 6 }; //w 벡터

	for (int i = -10; i < 10; i++)
	{
		for (int j = -10; j < 10; j++)
		{
			if (i * u[0] + j * v[0] == w[0]) {
				if (i * u[1] + j * v[1] == w[1]) {
					cout << i << "u+" << j << "v" << endl;
					break;
				}
			}
		}
	}
}

void HW38() {
	int n = (3 + 4) * (3 + 2 + 4 + 2);

	cout << n % 5 << endl;
}


void HW52() {
	int i;
	for (i = 0; i < 11; i++)
	{
		if ((8 * i) % 11 == 1) break; //모듈러 역수 계산
	}

	cout << (7 * 9) % 11 << endl;
}

void HW54() {
	int i;
	bool check = false;
	for (i = 0; i < 6; i++)
	{
		if ((4 * i) % 6 == 1) check = true; //모듈러 역수 계산이 될 경우
	}
	i == true ? cout << "해가 있음" << endl : cout << "해가 없음" << endl;
}

int main()
{
	int input;
	cout << "문제 번호를 입력하세요 : ";
	cin >> input;

	switch (input)
	{
	case 13:
		HW13();
		break;
	case 20:
		HW20();
		break;
	case 22:
		HW22();
		break;
	case 38:
		HW38();
		break;
	case 52:
		HW52();
		break;
	case 54:
		HW54();
		break;
	default:
		break;
	}
}

