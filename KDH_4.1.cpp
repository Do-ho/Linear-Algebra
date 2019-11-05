#include "KDH_function.h"

void HW06() {
	array<array<int, 3>, 3> a;
	array<int, 3> b = { -2, 1, 1 };
	a[0] = { 0, 1, -1 };
	a[1] = { 1, 1, 1 };
	a[2] = { 1, 2, 0 };

	eigenvector(a, b);
	printf("따라서 v는 행렬 A의 고유벡터이고 고윳값은 0이다.\n");
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
	printf("따라서 x=0, y=z이다. 이 문제 상황에서 [0,1,1]는 고유벡터이다.\n");
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
	case 12:
		HW12();
		break;



	}
	
}