// tong cac so chan trong mang nguyen khong am
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define size 200
int tinhTongChan(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int TongChan=tinhTongChan(n,A);
	xuat(TongChan);
	return 0;
}
int tinhTongChan(int n,int A[])
{
	int TongChan=0;
	for(int i=0;i<n;i++)
	{
		if( A[i]%2==0 && A[i] > 0 )
		    TongChan=TongChan+A[i];
	}
	return TongChan;
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu n trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
}
void xuat(int x)
{
	cout<<"Tong cac phan tu chan khong am trong mang "<<x;
}
