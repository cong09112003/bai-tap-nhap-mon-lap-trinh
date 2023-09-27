// nhap mang n so nguyen voi 1 so nguyen x, kiem tra mang co phan tu bang x
#include<iostream>
#include<string.h>
using namespace std;
#define size 200
int kiemTraSoBangX(int x,int n,int A[]);
void xuat(int x);
void nhap(int &x,int &n,int A[]);
int main()
{
	int n,x;
	int A[size];
	nhap(x,n,A);
	int check=kiemTraSoBangX(x,n,A);
	xuat(check);
	return 0;
}
int kiemTraSoBangX(int x,int n,int A[])
{
	for(int i=0;i<n;i++)
	{
		if(A[i] == x)
		    return 1;
	}
	return 0;
}
void nhap(int &x,int &n,int A[])
{
	cout<<"nhap so nguyen x:";
	cin>>x;
	cout<<"nhap so phan tu trong mang:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
}	
void xuat(int x)
{
	cout<<x;
}

