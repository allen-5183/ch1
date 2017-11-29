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
		cout << "1. 第一個 C++ 程式, 使用命名空間   std 範例" << endl;
		cout << "2. 第一個 C++ 程式, 不使用命名空間 std 範例" << endl;
		cout << "3. bool 型別與 C++ 的關鍵字 範例" << endl;
		cout << "4. cout 格式化: 輸出寬度(Output Width)" << endl;
		cout << "5. cout 格式化: 對齊方式(Alignment)" << endl;
		cout << "6. cout 格式化: 精確度(Precision)" << endl;
		cout << "7. cin 輸入" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "請輸入要執行的範例(或'0' 結束程式執行!)? ";
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
				cout << "你輸入的數字不在範圍內!" << endl;
				break;
		}

	}while (input !=0);



}
