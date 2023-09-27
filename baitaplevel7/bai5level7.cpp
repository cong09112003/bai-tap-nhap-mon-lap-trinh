// dem so nguyen to trong mang
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
bool kiemTraSoNguyenTo(int x);
int demSoNguyenTo(int n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int dem=demSoNguyenTo(n,A);
	xuat(dem);
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
int demSoNguyenTo(int n,int A[])
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(kiemTraSoNguyenTo(A[i])==true)
		    dem++;
	}
	return dem;	
}
void xuat(int x)
{
	    cout<<"So phan tu la so nguyen to trong mang la:"<<x;
}
