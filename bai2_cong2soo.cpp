#include <iostream>
using namespace std;
int main()
{
	cout << "chuong trinh tinh tong 2 so" << endl;
	int so1, so2;	//khai bao bien so1 va so2 kieu so nguyen nn
	int tong;
	cout << "nhap so1 :"; cin >> so1;
	cout << "nhap so2 :"; cin >> so2;
	tong = so1 + so2;
	cout << "tong hai so :" << so1 << "+" << so2 << "=" << tong << endl;
	cout << "tong hai so :" << so1 << "+" << so2 << "=" << so1 + so2;
	return 0;
}