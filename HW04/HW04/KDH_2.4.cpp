#include "KDH_function.h"

void HW04() {
	//1 dollar = 100 cent
	int coin_num = 20; //������ ����
	
	for (int i = 0; i < coin_num; i++) { //i�� 25��Ʈ ����
		for (int j = 0; j < coin_num; j++) { //j�� 10��Ʈ ����
			if ((coin_num - i - j) * 2 == j) { //5��Ʈ ������ 2�谡 10��Ʈ�� ������ ������
				if (25 * i + 10 * j + 5 * (coin_num - i - j) == 300) { //���� ���ϰ� 300�� ��
					cout << "a) " << "25��Ʈ : " << i << " 10��Ʈ : " << j << " 5��Ʈ : " << (coin_num - i - j) << endl;
				}
			}
		}
	}
	//a ���� Ǯ��
	cout << endl << "b) " << endl;
	for (int i = 0; i < coin_num; i++) { //i�� 25��Ʈ ����
		for (int j = 0; j < coin_num-i; j++) { //j�� 10��Ʈ ����
			if (25 * i + 10 * j + 5 * (coin_num - i - j) == 300) { //���� ���ϰ� 300�� ��
				cout << "25��Ʈ : " << i << " 10��Ʈ : " << j << " 5��Ʈ : " << (coin_num - i - j) << endl;
			}
		}
	}
	//b ���� Ǯ��
}

void HW16() {

}
int main()
{
	int input;
	cout << "���� ��ȣ�� �Է��ϼ��� : ";
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