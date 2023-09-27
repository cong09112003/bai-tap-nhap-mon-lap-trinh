// nhap Mang A n phan tu, viet chuong trinh minh hoa cac thao tac cap nhap va xoa phan tu tai vi tri i trong mang,
// thuc hien viec chen them 1 so nguyen x vao sau phan tu i(0<=i<n)
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define size 200
void nhap(int &n,int &k,int A[],int &x);
void xoaViTrik(int &n,int k,int A[]);
void chenXsauViTriK(int &n,int k,int A[],int x);
void CapNhapXoaPhanTuVChenThemX(int &n,int k,int A[],int x);
void xuat(int y);
int main()
{
	int n;
	int x,k,A[size];
	nhap(n,k,A,x);
	CapNhapXoaPhanTuVChenThemX(n,k,A,x);
	xuat;
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
void xoaViTrik(int &n,int k,int A[])
{
	for(int i=k;i<n-1;i++)
	    A[i]=A[i+1];
	n--;    
}
void chenXsauViTriK(int &n,int k,int A[],int x)
{
	for(int i=n-1;i>k;i--)
	    A[i+1]=A[i];
	A[k+1]=x;    
	n++;
}
void CapNhapXoaPhanTuVChenThemX(int &n,int k,int A[],int x)
{
	xoaViTrik(n,k,A);
	chenXsauViTriK(n,k,A,x);
	for(int i=0;i<n;i++)
	    xuat(A[i]);
}
void xuat(int y)
{
	cout<<y<<" ";
}

