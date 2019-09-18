#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

void HW13() {
	double u[2] = { 1.0 / 2.0, sqrt(3) / 2.0 }; //u ∫§≈Õ
	double v[2] = { sqrt(3) / 2.0, 1.0 / 2.0 }; //v ∫§≈Õ

	cout << "u + v = [" << u[0] + v[0] << ", " << u[1] + v[1] << "]" << endl; //u+v º∫∫– √‚∑¬
	cout << "u - v = [" << u[0] - v[0] << ", " << u[1] - v[1] << "]" << endl; //u-v º∫∫– √‚∑¬
}

void HW20() {
	int u[2] = { -2, 1 }; //u ∫§≈Õ
	int v[2] = { 2, -2 }; //v ∫§≈Õ
	// w = -u -2v

	int w[2] = { -u[0] - 2 * v[0], -u[1] - 2 * v[1] };

	cout << "w = [" << w[0] << ", " << w[1] << "]" << endl;
}

int main()
{
	int input;

	cin >> input;

	switch (input)
	{
	case 13:
		HW13();
		break;
	case 20:
		HW20();
		break;
	default:
		break;
	}
}

