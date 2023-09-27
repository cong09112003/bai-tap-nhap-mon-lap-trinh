#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int &k,int A[],int &x);
void chenXsauViTriK(int &n,int k,int A[],int x);
void xuat(int n,int A[]);
int main()
{
	int n,A[size],x,k;
	nhap(n,k,A,x);
	chenXsauViTriK(n,k,A,x);
	xuat(n,A);
	return 0;
}
void nhap(int &n,int &k,int A[],int &x)
{
    cout<<"so phan tu cua mang:";
	cin>>n;
	do
	{
	cout<<"cap nhap va xoa phan tu tai vi tri k:";
	cin>>k;
    }while(k<0 && k>=n );
    for(int i=0;i<n;i++)
        cin>>A[i];
    cout<<"chen them 1 so nguyen x vao sau phan tu thu k:";
	cin>>x; 
}
void chenXsauViTriK(int &n,int k,int A[],int x)
{
	for(int i=n-1;i>=k;i--)
	    A[i+1]=A[i];
	A[k]=x;
	n++;    
}
void xuat(int n,int A[])
{
	for(int i=0;i<n;i++)
	    cout<<A[i]<<" ";
}
