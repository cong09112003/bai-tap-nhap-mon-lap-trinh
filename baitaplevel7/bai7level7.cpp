// viet chuong trinh tinh tong cac so chinh phuong trong mang
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define size 200
bool kiemTraSoChinhPhuong(int x);
int TongChinhPhuong(int x,int A[]);
void nhap(int &n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int Tong=TongChinhPhuong(n,A);
	xuat(Tong);
	return 0;
}
bool kiemTraSoChinhPhuong(int x)
{
	if(sqrt(x) == (int) sqrt(x))
	    return true;
	return false;	
}
int TongChinhPhuong(int n,int A[])
{
	int Tong=0;
	for(int i=0;i<n;i++)
	{
		if(kiemTraSoChinhPhuong(A[i])==true)
		    Tong=Tong+A[i];
	}
	return Tong;
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu cua mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>A[i];
}
void xuat(int x)
{
	cout<<"Tong cua cac phan tu chinh phuong trong mang la:"<<x;
}
