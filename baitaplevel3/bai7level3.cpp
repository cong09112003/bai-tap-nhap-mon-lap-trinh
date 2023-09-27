// tinh tong cac chu so cua n
#include<iostream>
#include<math.h>
using namespace std;
int tinhTongCacChuSo(int n);
void nhap(int &n);
void xuat(int Tong);
int main()
{
	int n;
	nhap(n);
	int Tong=tinhTongCacChuSo(n);
	xuat(Tong);
	return 0;
}
int tinhTongCacChuSo(int n)
{
	int Tong=0;
	while ( n > 0)
	{
		int a=n%10;                       
		n/=10;                        
		Tong=Tong+a;                  
	}
	return Tong;	 
} 
void nhap(int &n)
{
	cout<<"nhap so nguyen n :";
	cin>>n;
}
void xuat(int Tong)
{
	cout<<"Tong cac chu so cua n la:"<< Tong<< endl;
}
