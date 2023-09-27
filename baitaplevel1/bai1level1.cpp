#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &x,int &y);
int tinhTong(int x,int y);
void xuat(int kq);
int main()
{
	int x,y;
	cout<<"nhap x="<<"\n";
	cout<<"nhap y="<<"\n";
	nhap(x,y);
	int kq=tinhTong(x,y);
	xuat(kq);
	return 0;
}
void nhap(int &x,int &y)
{
	cin>>x>>y;
}
int tinhTong(int x,int y)
{
	int t=x+y;
	return t;
}
void xuat(int kq)
{
	cout << "tong hai so x va y la " << kq  << endl;
}
