// xuat ra so nguyen to dau tien trong mang 1 chieu
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
bool kiemTraSoNguyenTo(int x);
int soNguyenToDauTien(int n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int so=soNguyenToDauTien(n,A);
	xuat(so);
	return 0;
}
void nhap(int &n,int A[])
{
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
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
int soNguyenToDauTien(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(kiemTraSoNguyenTo(A[i])==true)
		    return A[i];
	}
	return -1;	
}
void xuat(int x)
{
	if(x==-1)
	    cout<<x;
	else 
	    cout<<"phan tu la so nguyen to dau tien trong mang la:"<<x;
}

