// xuat so hoan thien dau tien trong mang
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int A[]);
bool kiemTraSoHoanThien(int x);
int soHoanThienDauTien(int n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int so=soHoanThienDauTien(n,A);
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
int soHoanThienDauTien(int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(kiemTraSoHoanThien(A[i])==true)
		    return A[i];
	}
	return -1;	
}
void xuat(int x)
{
	if(x==-1)
	    cout<<x;
	else 
	    cout<<"phan tu la so hoan thien dau tien trong mang la:"<<x;
}
