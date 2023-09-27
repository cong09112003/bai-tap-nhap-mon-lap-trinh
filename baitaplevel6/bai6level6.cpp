// dem cac nguyen am trong mang
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
int demCacSoAm(int n,int A[]);
void nhap(int &n,int A[]);
void xuat(int x);
int main()
{
	int n,A[size];
	nhap(n,A);
	int dem=demCacSoAm(n,A);
	xuat(dem);
	return 0;
}
int demCacSoAm(int n,int A[])
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(A[i] < 0 )
		    dem++;
	}
	return dem;
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
	cout<<"so cac so nguyen am trong mang la: "<<x;
}
