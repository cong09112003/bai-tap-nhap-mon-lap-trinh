// Tong cac phan tu trong mang
#include<iostream>
#include<string.h>
using namespace std;
#define  Size 200 
int tinhTongMang(int n,int A[]);
void xuat(int x);
void nhap(int &n,int A[]);
int main()
{
	int n,A[Size];
	nhap(n,A);
	int Tong = tinhTongMang(n, A);
	xuat(Tong);
	return 0;
}
void nhap(int &n,int A[])
{
	cout<<"nhap n so nguyen:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
}
int tinhTongMang(int n,int A[])
{
	int Tong=0;
	for(int i=0;i<n;i++)
	{
		Tong=Tong+A[i];
	}
	return Tong;
}
void xuat(int x)
{
	cout<<" Tong cac phan tu trong Mang:"<<x;
}
