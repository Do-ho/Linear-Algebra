#include "KDH_function.h"

void HW08() {
	double a[10][10];
	double l[10][10];
	double u[10][10];
	double sum = 0;
	int length;
	cout << "Length : ";
	cin >> length;
	cout << "Value : ";
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			cin >> a[i][j];
		}
	} //입력 받기

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			u[i][j] = 0;
			l[i][j] = 0;
		}
	} //초기화

	for (int i = 0; i < length; i++) {
		l[i][i] = 1;

		for (int j = i; j < length; j++) {
			for (int s = 0; s < i - 1; s++) {
				sum += l[i][s] * u[s][j];
			}
			u[i][j] = a[i][j] - sum;
		}

		for (int k = i + 1; k < length; k++) {
			double sum = 0;
			for (int s = 0; s < i - 1; s++) {
				sum += l[k][s] * u[s][i];
			}
			l[k][i] = (a[k][i] - sum) / u[i][i];
		}
	}

	cout << "L:" << endl;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			cout << l[i][j] << "\t";
		}
		cout << endl << endl;
	}
	cout << "U: " << endl;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			cout << u[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

void HW12() {
	double a[10][10];
	double l[10][10];
	double u[10][10];
	double sum = 0;
	int length;
	cout << "Length : ";
	cin >> length;
	cout << "Value : ";
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			cin >> a[i][j];
		}
	} //입력 받기

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			u[i][j] = 0;
			l[i][j] = 0;
		}
	} //초기화

	for (int i = 0; i < length; i++) {
		l[i][i] = 1;

		for (int j = i; j < length; j++) {
			for (int s = 0; s < i - 1; s++) {
				sum += l[i][s] * u[s][j];
			}
			u[i][j] = a[i][j] - sum;
		}

		for (int k = i + 1; k < length; k++) {
			double sum = 0;
			for (int s = 0; s < i - 1; s++) {
				sum += l[k][s] * u[s][i];
			}
			l[k][i] = (a[k][i] - sum) / u[i][i];
		}
	}

	cout << "L:" << endl;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			cout << l[i][j] << "\t";
		}
		cout << endl << endl;
	}
	cout << "U: " << endl;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			cout << u[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

void HW14() {
	array<array<float, 5>, 4> a;
	array<array<float, 4>, 4> b;
	a[0] = { 1,2,0,-1,1 };
	a[1] = { -2, -7, 3, 8, -2 };
	a[2] = { 1, 1, 3, 5, 2 };
	a[3] = { 0, 3, -3, -6, 0 };
	b[0] = { 1.0f, 0.0f, 0.0f, 0.0f };
	b[1] = { 0.0f, 1.0f, 0.0f, 0.0f };
	b[2] = { 0.0f, 0.0f, 1.0f, 0.0f };
	b[3] = { 0.0f, 0.0f, 0.0f, 1.0f };

	cout << "U : " << endl;
	U(&a);
	cout << endl << "L : " << endl;
	L(&b);
}

int main()
{
	int input;
	cout << "문제 번호를 입력하세요 : ";
	cin >> input;

	switch (input)
	{
	case 8:
		HW08();
		break;
	
	case 12:
		HW12();
		break;
	
	case 14:
		HW14();
		break;
	}
}