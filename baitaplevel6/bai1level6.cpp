// nhap vao n so nguyen xuat ra mang
#include<iostream>
#include<stdio.h>
using namespace std;
#define Size 200
void nhap(int &n,int A[]);
void xuat(int n, int A[]);
int main()
{
	int A[Size];
	int n;
	nhap(n,A);
	xuat(n,A);
	return 0;
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
void xuat(int n, int A[])
{
	cout<<"mang vua nhap:";
	for(int i=0;i<n;i++)
	    cout<<A[i]<<" ";
}
