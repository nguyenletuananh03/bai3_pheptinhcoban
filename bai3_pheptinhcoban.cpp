#include <iostream>
using namespace std;
int main()
{
	cout << "chuong trinh tinh cac phep tinh co ban\n";
	double so1, so2, tong, hieu, tich, thuong, phandu;
	cout << " nhap so1: "; cin >> so1;
		cout << " nhap so2: "; cin >> so2;
		tong = so1 + so2; 
		hieu = so1 - so2; 
		tich = so1 * so2; 
		thuong = so1 / so2; 
		cout << "tong hai so :" << so1 << "+" << so2 << "=" << tong << endl;
		cout << "hieu hai so :" << so1 << "-" << so2 << "=" << hieu << endl;
		cout << "tich hai so :" << so1 << "*" << so2 << "=" << tich << endl;
		cout << "thuong hai so :" << so1 << "/" << so2 << "=" << thuong << endl;
		return 0; 
}