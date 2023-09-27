// tinh S=1+2^2+3^2+4^2+...+n^2
#include<iostream>
#include<math.h>
using namespace std;
int tinhTongBinhPhuong(int &n);
void nhap(int &n);
void xuat(int Tong);
int main()
{
	int n;
	nhap(n);
	int Tong=tinhTongBinhPhuong(n);
	xuat(Tong);
	return 0;
}
int tinhTongBinhPhuong(int &n)
{
	int Tong=0;
	int i;
	for(int i=1;i<=n;i++)
	{
		Tong=Tong+pow(i,2);
	}
	return Tong;	
}	
void nhap(int &n)
{
	cout<<"nhap so nguyen n:";
	cin>>n;
}
void xuat(int Tong)
{
	cout<<"tong binh phuong cac so tu 1 den n la:"<< Tong << endl;
}	
