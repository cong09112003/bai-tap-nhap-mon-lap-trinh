#include<iostream>
using namespace std;
void xuat(int x);
void nhap(int &x, int &y);
int tinhTong(int x, int y);
int main()
{
	int x, y;
	nhap(x,y);
	int tong = tinhTong(x,y);
	xuat(tong);
	return 0;
}
void nhap(int &x, int &y)
{
	cin >> x >> y;
}
int tinhTong(int x, int y)
{
	int tong = x + y;
	return tong;
}
void xuat(int x)
{
	cout << x;
}

