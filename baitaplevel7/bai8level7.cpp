// tinh trung binh cong cua cac so trong mang
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define size 200
bool kiemTraSoNguyenTo(int x);
double tinhTrungBinhCongNguyenTo(int n,int A[]);
void xuat(double x);
void nhap(int &n,int A[]);
int main()
{
	int n,A[size];
	nhap(n,A);
	double TBC=tinhTrungBinhCongNguyenTo(n,A);
	xuat(TBC);
	return 0;
}
bool kiemTraSoNguyenTo(int x)
{
	if(x<2)
	    return false;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		    return false;  
	}
	return true;	
}
double tinhTrungBinhCongNguyenTo(int n,int A[])
{
	int TongNguyenTo=0;
	int dem=0;
	double TBC;
	for(int i=0;i<n;i++)
	{
		if(kiemTraSoNguyenTo(A[i])==true)
		{
		    TongNguyenTo=TongNguyenTo+A[i];
		    dem++;
	    }
	}
	TBC=(double) TongNguyenTo/dem;
	return TBC;	
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu cua mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>A[i];
}
void xuat(double x)
{
	cout<<"Trung binh cong cac so nguyen to trong mang la:"<<x;
}
