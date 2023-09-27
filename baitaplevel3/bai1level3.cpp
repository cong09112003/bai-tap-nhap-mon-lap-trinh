// tinh S=1+2+3+...+n
#include<iostream>
#include<math.h>
using namespace std;
int tinhTongSo(int n);
void nhap(int &n);
void xuat(int Tong);
int main()
{
	int n;
	nhap(n);
	int Tong=tinhTongSo(n);
	xuat(Tong);
	return 0;
}
int tinhTongSo(int n)
{
	int Tong=0;
	int i;
	for(i=1;i<=n;i++)
	    Tong=Tong+i;
	return Tong;    
}
void nhap(int &n)
{
	cout<<"nhap so nguyen n :";
	cin>>n;
}
void xuat(int Tong)
{
	cout<<"Tong cac so nguyen tu 1 den n la:"<< Tong << endl;
}
