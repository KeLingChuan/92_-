#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
int main(void) {
	string pwp;
	string zhanghao;
	
	while (true) {
		cout << "ÇëÊäÈëÕËºÅ£º\n";
		cin >> zhanghao;
		cout << "ÇëÊäÈëÃÜÂë£º\n";
		cin >> pwp;
		if (zhanghao == "1366553128"&& pwp=="kelingchuan1995") {
			break;
		}
		else {
			system("cls");
			system("pause");
			cout << "ÕËºÅ»òÃÜÂëÊäÈë´íÎó£¬ÇëÖØÐÂÊäÈë£¡\n";
			
		}
		
	}
	system("cls");
	cout << "***************************\n";
	cout << " 1.ÍøÕ¾404¹¥»÷\n";
	cout << " 2.ÍøÕ¾´Û¸Ä¹¥»÷\n";
	cout << " 3.ÍøÕ¾¹¥»÷¼ÇÂ¼\n";
	cout << " 4.DNS¹¥»÷\n";
	cout << " 5.·þÎñÆ÷ÖØÆô¹¥»÷\n";
	cout << " *************************\n";
	system("pause");
	return 0;
}