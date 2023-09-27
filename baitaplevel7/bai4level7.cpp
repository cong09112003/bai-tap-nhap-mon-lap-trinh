// xuat ra so hoan thien cuong cung
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
bool kiemTraSoHoanThien(int x);
int soHoanThienCuoiCung(int n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int so=soHoanThienCuoiCung(n,A);
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
bool kiemTraSoHoanThien(int x)
{
	int Tonguoc=0;
	if(x<6)
	    return false;
	for(int i=1;i<x;i++)	
	{
		if(x%i==0)
		    Tonguoc=Tonguoc+i;
	}
	if(Tonguoc==x)
	    return true;
	return false;        
}
int soHoanThienCuoiCung(int n,int A[])
{
	for(int i=n-1;i>=0;i--)
	{
		if(kiemTraSoHoanThien(A[i])==true)
		    return A[i];
	}
	return 0;	
}
void xuat(int x)
{
	if(x==0)
	    cout<<x;
	else 
	    cout<<"phan tu la so hoan thien cuoi cung trong mang la:"<<x;
}
