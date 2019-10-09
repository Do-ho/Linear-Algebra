#include "KDH_function.h"

void HW04() {
	//1 dollar = 100 cent
	int coin_num = 20; //코인의 개수
	
	for (int i = 0; i < coin_num; i++) { //i는 25센트 개수
		for (int j = 0; j < coin_num; j++) { //j는 10센트 개수
			if ((coin_num - i - j) * 2 == j) { //5센트 동전의 2배가 10센트의 개수와 같으면
				if (25 * i + 10 * j + 5 * (coin_num - i - j) == 300) { //합을 구하고 300과 비교
					cout << "a) " << "25센트 : " << i << " 10센트 : " << j << " 5센트 : " << (coin_num - i - j) << endl;
				}
			}
		}
	}
	//a 문제 풀이
	cout << endl << "b) " << endl;
	for (int i = 0; i < coin_num; i++) { //i는 25센트 개수
		for (int j = 0; j < coin_num-i; j++) { //j는 10센트 개수
			if (25 * i + 10 * j + 5 * (coin_num - i - j) == 300) { //합을 구하고 300과 비교
				cout << "25센트 : " << i << " 10센트 : " << j << " 5센트 : " << (coin_num - i - j) << endl;
			}
		}
	}
	//b 문제 풀이
}

void HW16() {

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
	case 16:
		HW16();
		break;

	default:
		break;
	}
}