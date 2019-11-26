#include "KDH_function.h"

void HW04() {
	array<array<float, 2>, 3> A;
	A[0] = { 1, 0 };
	A[1] = { 2, 3 };
	A[2] = { 0, 1 };

	gauss_04(&A);
	print_array(A);
	// 2/3t -1/3t t
	cout << endl << "span(2, -1, 3)" << endl;
}

void HW08() {
	array<array<float, 5>, 4> A;
	A[0] = { 1, 1, -1, 0, 2 };
	A[1] = { -2, 0, 2, 4, 4 };
	A[2] = { 2, 2, -2, 0, 1 };
	A[3] = { -3, -1, 3, 4, 5 };


	add(&A, 2, 1, 2);
	add(&A, 3, 1, -2);
	add(&A, 4, 1, 3);
	multiple(&A, 2, 0.5);
	add(&A, 1, 2, -1);
	add(&A, 4, 2, -2);
	add(&A, 4, 3, 1);
	multiple(&A, 3, -1 / 3);
	A[2][4] = 1;
	add(&A, 1, 3, 2);
	add(&A, 2, 3, -4);
	print_array(A);

	cout << "u1 = {1, 0, -1, -2, 0}" << endl;
	cout << "u2 = {0, 1, 0, 2, 0}" << endl;
	cout << "u3 = {0, 0, 0, 0, 1}" << endl;
	cout << "v1 = {1, 0, 1, 0, 0}" << endl;
	cout << "v2 = {2, -2, 0, 1, 0}" << endl;

	array<array<float, 5>, 3> u;
	u[0] = { 1, 0, -1, -2, 0 };
	u[1] = { 0, 1, 0, 2, 0 };
	u[2] = { 0, 0, 0, 0, 1 };
	array<float, 5> v1 = { 1, 0, 1, 0, 0 };
	array<float, 5> v2 = { 2, -2, 0, 1, 0 };

	if(b_orthogonal(u, v1)) cout << "v1일 때 모두 독립입니다." <<endl;
	if(b_orthogonal(u, v2)) cout << "v2일 때 모두 독립입니다." << endl;
}

void HW10() {
	array<array<float, 5>, 5> A;
	A[0] = { 1, -2, 2, -3, 0 };
	A[1] = { 1, 0, 2, -1, 0 };
	A[2] = { -1, 2, -2, 3, 0 };
	A[3] = { 0, 4, 0, 4, 0 };
	A[4] = { 2, 4, 1, 5, 0 };
	
	add(&A, 2, 1, -1);
	add(&A, 3, 1, 1);
	add(&A, 5, 1, -2);
	swap(&A, 3, 5);
	multiple(&A, 2, 0.5);
	add(&A, 1, 2, 2);
	add(&A, 3, 2, -8);
	add(&A, 4, 2, -4);
	multiple(&A, 3, -1 / 3);
	A[2][2] = 1; //오류로 인한 직접대입
	A[2][3] = -1; //오류로 인한 직접대입
	add(&A, 1, 3, -2);
	print_array(A);

	cout << "따라서 벡터 v1는 {-1, -1, 1, 1} 이다." << endl;
	
	array<float, 4> v1 = { -1, -1, 1, 1 };
	array<array<float, 4>, 5> B;
	B[0] = { 1, -2, 2, -3};
	B[1] = { 1, 0, 2, -1};
	B[2] = { -1, 2, -2, 3};
	B[3] = { 0, 4, 0, 4};
	B[4] = { 2, 4, 1, 5};

	if (b_orthogonal(B, v1)) cout << "모든 열벡터에 대해 독립이다." << endl;
	else cout << "모든 열벡터에 대해 독립이 아니다." << endl;
}

void HW13() {
	array<array<float, 4>, 3> A;
	A[0] = { 2, -1, 6, 3 };
	A[1] = { -1, 2, -3, -2 };
	A[2] = { 2, 5, 6, 1 };

	multiple(&A, 1, 0.5);
	add(&A, 2, 1, 1);
	add(&A, 3, 1, -2);
	add(&A, 3, 2, -4);
	multiple(&A, 2, 1/1.5f);
	add(&A, 1, 2, 0.5);
	print_array(A);

	cout << "따라서 span([-3,0,1,0], [-4,1,0,3])이고 두 벡터가 답이다." << endl;
}

void HW17() {
	array<float, 3> v, u1, u2;
	v = { 1, 2, 3 };
	u1 = { 2, -2, 1 };
	u2 = { -1, 1, 4 };
	
	array<float, 3> result = proj(v, u1, u2);

	cout << "[ " << result[0] << ", " << result[1] << ", " << result[2] << " ]" << endl;
}

void HW22() {
	array<float, 4> u1 = { 1, 1, 1, 0 };
	array<float, 4> u2 = { 1, 0, -1, 1 };
	array<float, 4> v = { 2, -1, 5, 6 };

	array<float, 4> result = proj(v, u1, u2);
	cout << "projw(v) = [ " << result[0] << ", " << result[1] << ", " << result[2] << ", " << result[3] << " ]" << endl;

	for (int i = 0; i < 4; i++)
	{
		result[i] -= v[i];
		result[i] *= -1;
	}

	cout << "projwㅗ(v) = [" << result[0] << ", " << result[1] << ", " << result[2] << ", " << result[3] << "] " << endl;
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
	case 8:
		HW08();
		break;
	case 10:
		HW10();
		break;
	case 13:
		HW13();
		break;
	case 17:
		HW17();
		break;
	case 22:
		HW22();
		break;
	}
	
}