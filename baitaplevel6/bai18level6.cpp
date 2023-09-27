// Mang dao nguoc cua mang vua nhap
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
void hoanDoi(int &x,int &y);
void daoNguocMang(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(int n,int A[]);
int main()
{
	int n,A[size];
	nhap(n,A);
	daoNguocMang(n,A);
	xuat(n,A);
	return 0;
}
void hoanDoi(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}
void daoNguocMang(int n,int A[])
{
	int x=0;
	int y=n-1;
	while(x<y)
	{
		hoanDoi(A[x],A[y]);
		x++;
		y--;
	}
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int n,int A[])
{
	cout<<"mang nghich dao cua mang vua nhap la: ";
	for(int i=0;i<n;i++)
	cout<<A[i]<<" ";
}
