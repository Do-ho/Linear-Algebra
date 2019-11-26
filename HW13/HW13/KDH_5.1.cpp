#include "KDH_function.h"

void HW05() {
	array<float, 4> a, b, c;
	a = { 2, 3, -1, 4 };
	b = { -2, 1, -1, 0 };
	c = { -4, -6, 2, 7 };
	
	if (b_orthogonal(a, b, c)) cout << "직교입니다." << endl;
	else cout << "직교가 아닙니다." << endl;
}

void HW10() {
	array<float, 3> a, b, c, w;
	a = { 1.0f, 1.0f, 1.0f };
	b = { 1.0f, -1.0f, 0.0f };
	c = { 1.0f, 1.0f, -2.0f };
	w = { 1.0f, 2.0f, 3.0f };

	if (b_orthogonal(a, b, c)) {
		cout << "독립입니다." << endl;
		cal_w(a, b, c, w);
	}
	else cout << "독립이 아닙니다." << endl;
}

void HW14() {
	array<float, 4> a, b, c;
	a = { 0.5f, 0.5f, -0.5f, 0.5f };
	b = { 0.0f, 1.0f/3.0f, 2.0f/3.0f, 1.0f/3.0f };
	c = { 0.5f, -0.1666667f, 0.1666667f, -0.1666667f };

	float norm_a = norm(a);
	float norm_b = norm(b);
	float norm_c = norm(c);

	cout << "||v1|| = " << norm_a << endl;
	cout << "||v2|| = " << norm_b << endl;
	cout << "||v3|| = " << norm_c << endl;

	cout << "{" << norm_a * a[0] << ", " << norm_a * a[1] << ", " << norm_a * a[2] << ", " << norm_a * a[3] << "}" << endl;
	cout << "{" << norm_a * b[0] << ", " << norm_b * b[1] << ", " << norm_b * b[2] << ", " << norm_b * b[3] << "}" << endl;
	cout << "{" << norm_a * c[0] << ", " << norm_c * c[1] << ", " << norm_c * c[2] << ", " << norm_c * c[3] << "}" << endl;
}

void HW30() {
	array<array<double, 2>, 2> Q;
	Q[0] = { -0.5, sqrt(3) / 2.0 };
	Q[1] = { -sqrt(3) / 2.0, -0.5 };

	cout << "det(Q) = " << det(Q) << endl;
	cout << "따라서 회전변환" << endl;
	cout << "cos(theta) = " << Q[0][0] << endl;
	cout << "sin(theta) = " << Q[1][0] << endl;
	cout << "theta = 240도" << endl;
}

int main()
{
	int input;
	cout << "문제 번호를 입력하세요 : ";
	cin >> input;

	switch (input)
	{
	case 5:
		HW05();
		break;
	case 10:
		HW10();
		break;
	case 14:
		HW14();
		break;
	case 30:
		HW30();
		break;
	}
	
		
}