#include "linear-algebra-function.h"


void HW04() {
	array<double, 3> u = { 3.2, -0.6, -1.4 }; //∫§≈Õ u
	array<double, 3> v = { 1.5, 4.1, -0.2 }; //∫§≈Õ v

	cout << "u°§v = " << dot(u, v) << endl;
}

void HW10() {
	array<double, 3> u = { 3.2, -0.6, -1.4 }; //∫§≈Õ u
	
	double scalar = sqrt(dot(u, u)); //Ω∫ƒÆ∂Û∞ˆ

	cout << "||u|| = " << scalar << endl; //Ω∫ƒÆ∂Û∞ˆ

	array<double, 3> v = { u[0] / scalar ,u[1] / scalar ,u[2] / scalar };

	cout << "¥‹¿ß∫§≈Õ v = [" << v[0] << ", " << v[1] << ", "<< v[2] << "]" << endl;
}

void HW16() {
	array<double, 3> u = { 3.2, -0.6, -1.4 }; //∫§≈Õ u
	array<double, 3> v = { 1.5, 4.1, -0.2 }; //∫§≈Õ v
	array<double, 3> w = { u[0] - v[0], u[1] - v[1], u[2] - v[2] }; // u-v
	cout << "d(u, v) = " << sqrt(dot(w, w)) << endl;
}

void HW28() {
	array<int, 4> u = { 1,2,3,4 };
	array<int, 4> v = { -3, 1, 2, -2 };

	cout << "theta = " << acos(dot(u,v)/(sqrt(dot(u,u))* sqrt(dot(v, v))))*180/3.141592;
}

int main()
{
	int input;
	cout << "πÆ¡¶ π¯»£∏¶ ¿‘∑¬«œººø‰ : ";
	cin >> input;

	switch (input)
	{
	case 4:
		HW04();
		break;
	case 10:
		HW10();
		break;
	case 16:
		HW16();
		break;
	case 28:
		HW28();
		break;
	default:
		break;
	}
}

