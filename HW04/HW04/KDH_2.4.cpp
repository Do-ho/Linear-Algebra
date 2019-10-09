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

void HW35() {
	array<array<int, 10>, 9> table;
	
	table[0] = { 1, 1, 0, 1, 0, 0, 0, 0, 0, 0 };
	table[1] = { 1, 1, 1, 0, 1, 0, 0, 0, 0, 1 };
	table[2] = { 0, 1, 1, 0, 0, 1, 0, 0, 0, 1 };
	table[3] = { 1, 0, 0, 1, 1, 0, 1, 0, 0, 1 };
	table[4] = { 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 };
	table[5] = { 0, 0, 1, 0, 1, 1, 0, 0, 1, 1 };
	table[6] = { 0, 0, 0, 1, 0, 0, 1, 1, 0, 1 };
	table[7] = { 0, 0, 0, 0, 1, 0, 1, 1, 1, 1 };
	table[8] = { 0, 0, 0, 0, 0, 1, 0, 1, 1, 0 };

	array<int, 9> s = { 0,1,1,1,0,1,1,1,0 };
	
	table = arrzero(0, table);

	arrprint(table);
	cout << endl;

	table = arrzero(1, table);

	
	arrprint(table);


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
	case 35:
		HW35();
		break;

	default:
		break;
	}
}