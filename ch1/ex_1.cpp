#include <iostream>
#include <cstdlib>
//#include "stdafx.h"

using namespace std;

void ex_1(void)
{
	int x; // 宣告變數 x, 用來儲存玩家輸入的攻擊力
	cout << "輸入攻擊力 :";
	cin >> x;
	cout << "對怪物的傷害值為 :" << x * 2 - 15 << endl;
	
	system("pause"); 
	//return(0);
}
