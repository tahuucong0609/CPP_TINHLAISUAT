// CPP_TinhLaiSuat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

	int x;
	float tienlai, tiengui, laisuat, thoihan;
	for (x = 4; x >= 0; x--)
	{
		cout << "nhap tien gui ban dau, lai suat va thoi han : " << endl;
		cin >> tiengui >> laisuat >> thoihan;
		tienlai = (tiengui * laisuat * thoihan) / 100;
		cout << "tien gui ban dau = " << tiengui << endl;
		cout << "lai suat = " << laisuat << "%" << endl;
		cout << "thoi han = " << thoihan << " nam" << endl;
		cout << "so tien lai = " << tienlai << endl;
	}
	return 0;
}