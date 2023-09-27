#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void nhap(int &h,int &m, int &s);
int kiemTra(int h,int m,int s);
void xuat(int dk);
int main()
{
	int h,m,s;
	cout<<"nhap h="<<"\n";
	cout<<"nhap m="<<"\n";
	cout<<"nhap s="<<"\n";
	nhap(h,m,s);
	int dk=kiemTra(h,m,s);
	xuat (dk);
	return dk;
}
void nhap(int &h,int &m, int &s)
{
	cin>>h>>m>>s;
}
int kiemTra(int h,int m,int s)
{
	int dk;
	if (h<=24 and m<=60 and s<=60)
	{
		dk=1;
	}
	else {
		dk=0;
	}
	return dk;
}
void xuat(int dk)
{
	if (dk == 1){
		cout<<"bo gio phut giay hop ly";
	}
	else {
		cout<<"bo goi phut giay khong hop ly";
	}
}
