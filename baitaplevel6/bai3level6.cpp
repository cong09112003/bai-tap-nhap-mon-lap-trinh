// Tinh trung binh cac phan tu trong mang n so nguyen
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define Size 200
double tinhTrungBinh(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(double x);
int main()
{
	int n,A[Size];
	nhap(n,A);
	double TB=tinhTrungBinh(n,A);
	xuat(TB);
	return 0;
}
double tinhTrungBinh(int n,int A[])
{
	double TB;
	int Tong=0;
	for(int i=0;i<n;i++)
	{
		Tong=Tong+A[i];
	}
	TB=(double) Tong/n;
	return TB;
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
void xuat(double x)
{
	cout<<"Trung binh cong cac phan tu trong mang:"<<x;
}
