#include <iostream>
#include <cstdlib>
using namespace std;

extern void ex_1();
extern void ex_2();
extern void ex_3();
extern void ex_4();
extern void ex_5();
extern void ex_6();
extern void ex_7();

int main(void)
{
	int input;
	do {
		system("cls");
		cout << "1. �Ĥ@�� C++ �{��, �ϥΩR�W�Ŷ�   std �d��" << endl;
		cout << "2. �Ĥ@�� C++ �{��, ���ϥΩR�W�Ŷ� std �d��" << endl;
		cout << "3. bool ���O�P C++ ������r �d��" << endl;
		cout << "4. cout �榡��: ��X�e��(Output Width)" << endl;
		cout << "5. cout �榡��: ����覡(Alignment)" << endl;
		cout << "6. cout �榡��: ��T��(Precision)" << endl;
		cout << "7. cin ��J" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "�п�J�n���檺�d��(��'0' �����{������!)? ";
		cin >> input;

		while (getchar() != '\n')
		;
		switch (input) {
		    case 0:
			break;
			case 1:
				ex_1();
				break;
			case 2:
				ex_2();
				break;
			case 3:
				ex_3();
				break;
			case 4:
				ex_4();
				break;
			case 5:
				ex_5();
				break;
			case 6:
				ex_6();
				break;
			case 7:
				ex_7();
				break;
			default:
				cout << "�A��J���Ʀr���b�d��!" << endl;
				break;
		}

	}while (input !=0);



}
