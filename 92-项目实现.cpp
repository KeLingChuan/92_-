#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
int main(void) {
	string pwp;
	string zhanghao;
	
	while (true) {
		cout << "�������˺ţ�\n";
		cin >> zhanghao;
		cout << "���������룺\n";
		cin >> pwp;
		if (zhanghao == "1366553128"&& pwp=="kelingchuan1995") {
			break;
		}
		else {
			system("cls");
			system("pause");
			cout << "�˺Ż���������������������룡\n";
			
		}
		
	}
	system("cls");
	cout << "***************************\n";
	cout << " 1.��վ404����\n";
	cout << " 2.��վ�۸Ĺ���\n";
	cout << " 3.��վ������¼\n";
	cout << " 4.DNS����\n";
	cout << " 5.��������������\n";
	cout << " *************************\n";
	system("pause");
	return 0;
}